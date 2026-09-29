#!/usr/bin/env python3
"""
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
  LeetCode → GitHub DSA Sync
  Author  : Rakshit Mishra
  GitHub  : github.com/Rakshit0229/DSA
  LeetCode: leetcode.com/u/Rakshit02
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
Fetches every accepted LeetCode submission,
organizes it by difficulty, and updates the
README with a live progress table.
"""

import os
import re
import sys
import time
import requests
from pathlib import Path
from datetime import datetime, timezone

# ── Config ────────────────────────────────────────────────────────────────────
USERNAME         = "Rakshit02"
GRAPHQL_URL      = "https://leetcode.com/graphql"
SUBMISSIONS_URL  = "https://leetcode.com/api/submissions/"

LEETCODE_SESSION = os.environ.get("LEETCODE_SESSION", "")
CSRF_TOKEN       = os.environ.get("LEETCODE_CSRF_TOKEN", "")

if not LEETCODE_SESSION or not CSRF_TOKEN:
    print("❌  Missing secrets: LEETCODE_SESSION or LEETCODE_CSRF_TOKEN")
    sys.exit(1)

# ── Language → file extension ─────────────────────────────────────────────────
LANG_EXT = {
    "python3": "py",  "python": "py",
    "cpp":     "cpp", "java":   "java",
    "javascript": "js", "typescript": "ts",
    "c":       "c",   "csharp":  "cs",
    "go":      "go",  "ruby":    "rb",
    "swift":   "swift","kotlin": "kt",
    "rust":    "rs",  "scala":   "scala",
    "mysql":   "sql", "bash":    "sh",
}

# ── Comment style per extension ───────────────────────────────────────────────
LANG_CMT = {
    "py": "#",  "cpp": "//", "java": "//",
    "js": "//", "ts":  "//", "c":    "//",
    "cs": "//", "go":  "//", "rb":   "#",
    "swift": "//","kt": "//","rs":   "//",
    "scala": "//","sql": "--","sh":  "#",
}

# ── HTTP helpers ──────────────────────────────────────────────────────────────
def _headers():
    return {
        "Cookie":       f"LEETCODE_SESSION={LEETCODE_SESSION}; csrftoken={CSRF_TOKEN}",
        "X-CSRFToken":  CSRF_TOKEN,
        "Referer":      "https://leetcode.com",
        "Content-Type": "application/json",
        "User-Agent":   "Mozilla/5.0 (compatible; DSA-Sync-Bot/1.0)",
    }

def _gql(query: str, variables: dict = None) -> dict:
    """Run a GraphQL query against LeetCode."""
    r = requests.post(
        GRAPHQL_URL,
        json={"query": query, "variables": variables or {}},
        headers=_headers(),
        timeout=15,
    )
    r.raise_for_status()
    return r.json().get("data", {})

# ── LeetCode API calls ────────────────────────────────────────────────────────
def fetch_problem_details(slug: str) -> dict:
    """Return questionId, title, difficulty, topicTags for a slug."""
    q = """
    query ($titleSlug: String!) {
        question(titleSlug: $titleSlug) {
            questionId
            title
            difficulty
            topicTags { name }
        }
    }
    """
    return _gql(q, {"titleSlug": slug}).get("question", {})


def fetch_all_accepted_submissions() -> list[dict]:
    """
    Paginate through /api/submissions/ and return every accepted submission.
    Each submission dict includes: id, title, title_slug, lang, code, timestamp.
    """
    results, offset = [], 0
    print("  Fetching submissions", end="", flush=True)

    while True:
        url = f"{SUBMISSIONS_URL}?offset={offset}&limit=20"
        r   = requests.get(url, headers=_headers(), timeout=15)
        r.raise_for_status()
        data = r.json()

        batch    = data.get("submissions_dump", [])
        accepted = [s for s in batch if s.get("status_display") == "Accepted"]
        results.extend(accepted)

        print(".", end="", flush=True)
        if not data.get("has_next"):
            break
        offset += 20
        time.sleep(1.2)   # be polite to LeetCode servers

    print(f"  done ({len(results)} accepted)\n")
    return results


# ── File creation ─────────────────────────────────────────────────────────────
def write_solution(sub: dict, details: dict) -> bool:
    """
    Create  <Difficulty>/<id>-<slug>/solution.<ext>
    Returns True if a new file was written, False if it already existed.
    """
    q_id  = str(details.get("questionId", "0000")).zfill(4)
    title = details.get("title",  sub.get("title", "Unknown"))
    slug  = sub.get("title_slug", "unknown")
    diff  = details.get("difficulty", "Medium")
    lang  = sub.get("lang", "python3")
    code  = sub.get("code", "")
    ts    = datetime.fromtimestamp(
                int(sub.get("timestamp", 0)), tz=timezone.utc
            ).strftime("%Y-%m-%d")

    ext  = LANG_EXT.get(lang, "txt")
    cmt  = LANG_CMT.get(ext, "//")
    tags = ", ".join(t["name"] for t in details.get("topicTags", []))

    # folder: e.g.  Easy/0001-two-sum/
    folder   = Path(diff) / f"{q_id}-{slug}"
    folder.mkdir(parents=True, exist_ok=True)

    # allow multiple-language solutions for the same problem
    filepath = folder / f"solution.{ext}"
    if filepath.exists():
        return False          # already synced — skip

    header = (
        f"{cmt} ╔══════════════════════════════════════════════╗\n"
        f"{cmt}   Problem   : {title}\n"
        f"{cmt}   Difficulty: {diff}\n"
        f"{cmt}   Tags      : {tags if tags else 'N/A'}\n"
        f"{cmt}   Language  : {lang}\n"
        f"{cmt}   Solved on : {ts}\n"
        f"{cmt}   URL       : https://leetcode.com/problems/{slug}/\n"
        f"{cmt} ╚══════════════════════════════════════════════╝\n\n"
    )

    filepath.write_text(header + code, encoding="utf-8")
    print(f"    ✅  [{q_id}] {title}  ({lang})")
    return True


# ── README generator ──────────────────────────────────────────────────────────
def update_readme(problems: list[dict]) -> None:
    """
    Regenerate the <!-- LEETCODE_STATS_START/END --> block in README.md.
    """
    easy   = [p for p in problems if p["difficulty"] == "Easy"]
    medium = [p for p in problems if p["difficulty"] == "Medium"]
    hard   = [p for p in problems if p["difficulty"] == "Hard"]
    total  = len(problems)

    sorted_p = sorted(problems, key=lambda x: int(x["id"]))

    rows = "\n".join(
        f"| `{int(p['id']):04d}` "
        f"| [{p['title']}](https://leetcode.com/problems/{p['slug']}/) "
        f"| {p['difficulty']} "
        f"| `{p['lang']}` "
        f"| {p['date']} "
        f"| {p['tags'] or '—'} |"
        for p in sorted_p
    )

    block = f"""\
<!-- LEETCODE_STATS_START -->
## 📊 Progress

| Difficulty | Solved |
|:----------:|:------:|
| 🟢 Easy    | **{len(easy)}** |
| 🟡 Medium  | **{len(medium)}** |
| 🔴 Hard    | **{len(hard)}** |
| ⚡ **Total** | **{total}** |

> Last synced: {datetime.now(tz=timezone.utc).strftime('%Y-%m-%d %H:%M UTC')}

## 📋 All Solutions

| # | Problem | Difficulty | Language | Solved On | Topics |
|---|---------|:----------:|:--------:|:---------:|--------|
{rows}
<!-- LEETCODE_STATS_END -->"""

    readme_path = Path("README.md")
    content     = readme_path.read_text(encoding="utf-8") if readme_path.exists() else ""

    if "<!-- LEETCODE_STATS_START -->" in content:
        content = re.sub(
            r"<!-- LEETCODE_STATS_START -->.*?<!-- LEETCODE_STATS_END -->",
            block,
            content,
            flags=re.DOTALL,
        )
    else:
        content += "\n\n" + block + "\n"

    readme_path.write_text(content, encoding="utf-8")
    print(f"\n  📝  README updated — {total} problem(s) listed.")


# ── Entry point ───────────────────────────────────────────────────────────────
def main():
    print("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━")
    print("  LeetCode → GitHub DSA Sync")
    print(f"  User : {USERNAME}")
    print(f"  Time : {datetime.now(tz=timezone.utc).strftime('%Y-%m-%d %H:%M UTC')}")
    print("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n")

    submissions = fetch_all_accepted_submissions()

    if not submissions:
        print("  ⚠️  No accepted submissions found. Check your session cookie.")
        sys.exit(0)

    seen     : set[str] = set()
    problems : list[dict] = []
    new_count = 0

    for sub in submissions:
        slug = sub.get("title_slug", "")
        if not slug or slug in seen:
            continue
        seen.add(slug)

        details = fetch_problem_details(slug)
        time.sleep(0.5)   # rate-limit GraphQL calls

        is_new = write_solution(sub, details)
        if is_new:
            new_count += 1

        problems.append({
            "id":         details.get("questionId", "0"),
            "title":      details.get("title", sub.get("title", "Unknown")),
            "slug":       slug,
            "difficulty": details.get("difficulty", "Medium"),
            "lang":       sub.get("lang", ""),
            "date":       datetime.fromtimestamp(
                              int(sub.get("timestamp", 0)), tz=timezone.utc
                          ).strftime("%Y-%m-%d"),
            "tags":       ", ".join(t["name"] for t in details.get("topicTags", [])),
        })

    update_readme(problems)

    print(f"\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━")
    print(f"  ✅  Sync complete — {new_count} new solution(s) added.")
    print(f"━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n")


if __name__ == "__main__":
    main()
