#!/usr/bin/env python3
"""
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
  LeetCode → GitHub DSA Sync
  Author  : Rakshit Mishra
  GitHub  : github.com/Rakshit0229/DSA
  LeetCode: leetcode.com/u/Rakshit02
  Mode    : 1 problem = 1 commit = 1 contribution 🟩
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
"""

import os
import re
import sys
import time
import subprocess
import requests
from pathlib import Path
from datetime import datetime, timezone

# ── Config ────────────────────────────────────────────────────────────────────
USERNAME         = "Rakshit02"
GRAPHQL_URL      = "https://leetcode.com/graphql"

LEETCODE_SESSION = os.environ.get("LEETCODE_SESSION", "")
CSRF_TOKEN       = os.environ.get("LEETCODE_CSRF_TOKEN", "")
GH_PAT           = os.environ.get("GH_PAT", "")
GH_REPO          = "Rakshit0229/DSA"
GIT_NAME         = "Rakshit0229"
GIT_EMAIL        = "rakshit.25bcon2222@jecrcu.edu.in"

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

DIFF_EMOJI = {"Easy": "🟢", "Medium": "🟡", "Hard": "🔴"}

# ── Git helpers ───────────────────────────────────────────────────────────────
def git(args: list[str]) -> str:
    result = subprocess.run(
        ["git"] + args,
        capture_output=True, text=True
    )
    return result.stdout.strip()

def git_setup():
    git(["config", "user.name",  GIT_NAME])
    git(["config", "user.email", GIT_EMAIL])
    if GH_PAT:
        remote = f"https://{GIT_NAME}:{GH_PAT}@github.com/{GH_REPO}.git"
        git(["remote", "set-url", "origin", remote])
    # Abort any stuck rebase from a previous interrupted run
    rebase_dir = Path(".git/rebase-merge")
    if rebase_dir.exists():
        print("  ⚠️  Stuck rebase detected — aborting it cleanly...")
        git(["rebase", "--abort"])
        print("  ✅  Rebase aborted. Continuing fresh.")

def git_commit_and_push(message: str):
    """Stage all changes, commit, fetch+rebase, then push."""
    git(["add", "."])
    # Check if there's anything to commit
    status = git(["diff", "--staged", "--stat"])
    if not status:
        return False
    git(["commit", "-m", message])
    # Use fetch + rebase instead of pull --rebase to avoid interrupted-state issues
    git(["fetch", "origin", "main"])
    git(["rebase", "origin/main"])
    git(["push", "origin", "main"])
    return True

# ── HTTP helpers ──────────────────────────────────────────────────────────────
def _headers():
    return {
        "Cookie":       f"LEETCODE_SESSION={LEETCODE_SESSION}; csrftoken={CSRF_TOKEN}",
        "X-CSRFToken":  CSRF_TOKEN,
        "Referer":      "https://leetcode.com/problemset/",
        "Origin":       "https://leetcode.com",
        "Content-Type": "application/json",
        "User-Agent":   "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36",
        "Accept":       "application/json, text/javascript, */*; q=0.01",
        "Accept-Language": "en-US,en;q=0.9",
    }

def _gql(query: str, variables: dict = None) -> dict:
    r = requests.post(
        GRAPHQL_URL,
        json={"query": query, "variables": variables or {}},
        headers=_headers(), timeout=15,
    )
    r.raise_for_status()
    return r.json().get("data", {})

# ── LeetCode API ──────────────────────────────────────────────────────────────
def fetch_problem_details(slug: str) -> dict:
    q = """
    query ($titleSlug: String!) {
        question(titleSlug: $titleSlug) {
            questionId title difficulty
            topicTags { name }
        }
    }
    """
    return _gql(q, {"titleSlug": slug}).get("question", {})

def fetch_all_accepted() -> list:
    """Fetch all accepted submissions via GraphQL (avoids the blocked /api/submissions/ endpoint)."""
    GQL_SUBMISSIONS = """
    query submissionList($offset: Int!, $limit: Int!, $lastKey: String, $questionSlug: String, $lang: Int, $status: Int) {
        submissionList(offset: $offset, limit: $limit, lastKey: $lastKey, questionSlug: $questionSlug, lang: $lang, status: $status) {
            lastKey
            hasNext
            submissions {
                id
                statusDisplay
                lang
                runtime
                timestamp
                url
                isPending
                title
                titleSlug
                code: fullCode
            }
        }
    }
    """
    results, offset, last_key = [], 0, None
    print("  Fetching submissions via GraphQL", end="", flush=True)
    while True:
        variables = {
            "offset": offset,
            "limit":  20,
            "lastKey": last_key,
            "status": 10,   # 10 = Accepted on LeetCode
        }
        data = _gql(GQL_SUBMISSIONS, variables)
        sub_list = data.get("submissionList", {})
        subs = sub_list.get("submissions", [])
        # filter to only Accepted in case status filter doesn't apply
        accepted = [s for s in subs if s.get("statusDisplay") == "Accepted"]
        results.extend(accepted)
        print(".", end="", flush=True)
        if not sub_list.get("hasNext"):
            break
        last_key = sub_list.get("lastKey")
        offset += 20
        time.sleep(1.2)
    print(f"  done ({len(results)} accepted)\n")
    return results

# ── File writer ───────────────────────────────────────────────────────────────
def write_solution(sub: dict, details: dict) -> tuple[bool, dict]:
    """Write solution file. Returns (is_new, meta)."""
    q_id  = str(details.get("questionId", "0000")).zfill(4)
    title = details.get("title", sub.get("title", "Unknown"))
    slug  = sub.get("titleSlug", sub.get("title_slug", "unknown"))
    diff  = details.get("difficulty", "Medium")
    lang  = sub.get("lang", "python3")
    code  = sub.get("code", "")
    ts    = datetime.fromtimestamp(
                int(sub.get("timestamp", 0)), tz=timezone.utc
            ).strftime("%Y-%m-%d")

    ext  = LANG_EXT.get(lang, "txt")
    cmt  = LANG_CMT.get(ext, "//")
    tags = ", ".join(t["name"] for t in details.get("topicTags", []))

    folder   = Path(diff) / f"{q_id}-{slug}"
    folder.mkdir(parents=True, exist_ok=True)
    filepath = folder / f"solution.{ext}"

    meta = {
        "id": q_id, "title": title, "slug": slug,
        "diff": diff, "lang": lang, "date": ts, "tags": tags,
    }

    if filepath.exists():
        return False, meta

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
    return True, meta

# ── README updater ────────────────────────────────────────────────────────────
def update_readme(problems: list) -> None:
    easy   = [p for p in problems if p["diff"] == "Easy"]
    medium = [p for p in problems if p["diff"] == "Medium"]
    hard   = [p for p in problems if p["diff"] == "Hard"]

    rows = "\n".join(
        f"| `{int(p['id']):04d}` "
        f"| [{p['title']}](https://leetcode.com/problems/{p['slug']}/) "
        f"| {DIFF_EMOJI.get(p['diff'], '')} {p['diff']} "
        f"| `{p['lang']}` "
        f"| {p['date']} "
        f"| {p['tags'] or '—'} |"
        for p in sorted(problems, key=lambda x: int(x["id"]))
    )

    now = datetime.now(tz=timezone.utc).strftime("%Y-%m-%d %H:%M UTC")

    block = f"""\
<!-- LEETCODE_STATS_START -->
## 📊 Progress

| Difficulty | Solved |
|:----------:|:------:|
| 🟢 Easy    | **{len(easy)}** |
| 🟡 Medium  | **{len(medium)}** |
| 🔴 Hard    | **{len(hard)}** |
| ⚡ **Total** | **{len(problems)}** |

> 🕐 Last synced: `{now}`

## 📋 All Solutions

| # | Problem | Difficulty | Language | Solved On | Topics |
|---|---------|:----------:|:--------:|:---------:|--------|
{rows}
<!-- LEETCODE_STATS_END -->"""

    readme_path = Path("README.md")
    content = readme_path.read_text(encoding="utf-8") if readme_path.exists() else ""

    if "<!-- LEETCODE_STATS_START -->" in content:
        content = re.sub(
            r"<!-- LEETCODE_STATS_START -->.*?<!-- LEETCODE_STATS_END -->",
            block, content, flags=re.DOTALL,
        )
    else:
        content += "\n\n" + block + "\n"

    readme_path.write_text(content, encoding="utf-8")

# ── Main ──────────────────────────────────────────────────────────────────────
def main():
    print("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━")
    print("  LeetCode → GitHub DSA Sync")
    print(f"  User : {USERNAME}")
    print(f"  Mode : 1 problem = 1 commit = 1 contribution 🟩")
    print(f"  Time : {datetime.now(tz=timezone.utc).strftime('%Y-%m-%d %H:%M UTC')}")
    print("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n")

    git_setup()

    submissions = fetch_all_accepted()
    if not submissions:
        print("  ⚠️  No accepted submissions found. Check session cookie.")
        sys.exit(0)

    seen:     set  = set()
    all_problems: list = []
    new_count = 0

    for sub in submissions:
        slug = sub.get("titleSlug", sub.get("title_slug", ""))
        if not slug or slug in seen:
            continue
        seen.add(slug)

        details = fetch_problem_details(slug)
        time.sleep(0.5)

        is_new, meta = write_solution(sub, details)
        all_problems.append(meta)

        if is_new:
            new_count += 1
            emoji = DIFF_EMOJI.get(meta["diff"], "")

            # ✅ Update README with latest stats
            update_readme(all_problems)

            # ✅ ONE commit per problem = ONE contribution on GitHub
            msg = (
                f"{emoji} [{meta['id']}] {meta['title']} "
                f"({meta['diff']}) — {meta['lang']}"
            )
            pushed = git_commit_and_push(msg)
            if pushed:
                print(f"    🟩  Committed & pushed: {meta['title']}")
            time.sleep(2)  # brief pause between pushes

    # Final README update (even if no new problems — keeps timestamp fresh)
    if new_count == 0:
        update_readme(all_problems)
        git_commit_and_push(
            f"📝 Daily README sync — {datetime.now(tz=timezone.utc).strftime('%Y-%m-%d')}"
        )
        print("  📝  No new problems — README timestamp updated.")

    print(f"\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━")
    print(f"  ✅  Done — {new_count} new solution(s) → {new_count} new contribution(s) 🟩")
    print(f"━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n")


if __name__ == "__main__":
    main()
