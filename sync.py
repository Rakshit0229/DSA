#!/usr/bin/env python3
"""
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
  LeetCode → GitHub DSA Sync
  Author  : Rakshit Mishra
  GitHub  : github.com/Rakshit0229/DSA
  LeetCode: leetcode.com/u/Rakshit02
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
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

# ── Language maps ─────────────────────────────────────────────────────────────
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
    r = requests.post(
        GRAPHQL_URL,
        json={"query": query, "variables": variables or {}},
        headers=_headers(),
        timeout=15,
    )
    r.raise_for_status()
    return r.json().get("data", {})

# ── LeetCode API ──────────────────────────────────────────────────────────────
def fetch_problem_details(slug: str) -> dict:
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


def fetch_all_accepted() -> list:
    results, offset = [], 0
    print("  Fetching submissions", end="", flush=True)
    while True:
        r = requests.get(
            f"{SUBMISSIONS_URL}?offset={offset}&limit=20",
            headers=_headers(), timeout=15
        )
        r.raise_for_status()
        data = r.json()
        accepted = [s for s in data.get("submissions_dump", [])
                    if s.get("status_display") == "Accepted"]
        results.extend(accepted)
        print(".", end="", flush=True)
        if not data.get("has_next"):
            break
        offset += 20
        time.sleep(1.2)
    print(f"  done ({len(results)} accepted)\n")
    return results


# ── File writer ───────────────────────────────────────────────────────────────
def write_solution(sub: dict, details: dict) -> bool:
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

    folder = Path(diff) / f"{q_id}-{slug}"
    folder.mkdir(parents=True, exist_ok=True)

    filepath = folder / f"solution.{ext}"
    if filepath.exists():
        return False

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


# ── README updater ────────────────────────────────────────────────────────────
def update_readme(problems: list) -> None:
    """
    Always rewrites the stats block with a fresh timestamp —
    this guarantees a daily git diff → daily commit → daily contribution ✅
    """
    easy   = [p for p in problems if p["difficulty"] == "Easy"]
    medium = [p for p in problems if p["difficulty"] == "Medium"]
    hard   = [p for p in problems if p["difficulty"] == "Hard"]
    total  = len(problems)

    now_ist = datetime.now(tz=timezone.utc).strftime("%Y-%m-%d %H:%M UTC")

    rows = "\n".join(
        f"| `{int(p['id']):04d}` "
        f"| [{p['title']}](https://leetcode.com/problems/{p['slug']}/) "
        f"| {p['difficulty']} "
        f"| `{p['lang']}` "
        f"| {p['date']} "
        f"| {p['tags'] or '—'} |"
        for p in sorted(problems, key=lambda x: int(x["id"]))
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

> 🕐 Last synced: `{now_ist}` — auto-updates every day at 12:00 AM IST

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
    print(f"\n  📝  README updated — {total} problems · synced at {now_ist}")


# ── Main ──────────────────────────────────────────────────────────────────────
def main():
    print("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━")
    print("  LeetCode → GitHub DSA Sync")
    print(f"  User : {USERNAME}")
    print(f"  Time : {datetime.now(tz=timezone.utc).strftime('%Y-%m-%d %H:%M UTC')}")
    print("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n")

    submissions = fetch_all_accepted()

    if not submissions:
        print("  ⚠️  No accepted submissions found. Check your session cookie.")
        # Still update README timestamp so today's commit is not skipped
        update_readme([])
        sys.exit(0)

    seen:     set  = set()
    problems: list = []
    new_count = 0

    for sub in submissions:
        slug = sub.get("title_slug", "")
        if not slug or slug in seen:
            continue
        seen.add(slug)

        details = fetch_problem_details(slug)
        time.sleep(0.5)

        if write_solution(sub, details):
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

    # ✅ Always update README — this guarantees a daily commit even on rest days
    update_readme(problems)

    print(f"\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━")
    print(f"  ✅  Done — {new_count} new solution(s) added.")
    print(f"━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n")


if __name__ == "__main__":
    main()
