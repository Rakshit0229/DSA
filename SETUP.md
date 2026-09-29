# ⚙️ Setup Guide — LeetCode Auto Sync

Follow these steps once to get the auto-sync working.

---

## Step 1 — Get Your LeetCode Session Cookie

1. Open [leetcode.com](https://leetcode.com) and **log in**
2. Press `F12` to open DevTools → go to **Application** tab
3. In the left sidebar: **Cookies → https://leetcode.com**
4. Find and copy these two values:

| Cookie Name | What to copy |
|---|---|
| `LEETCODE_SESSION` | The long string value |
| `csrftoken` | The shorter string value |

> ⚠️ These cookies expire after ~2 weeks. You'll need to refresh them when the sync breaks.

---

## Step 2 — Add Secrets to Your GitHub Repo

1. Go to your **DSA repo** on GitHub
2. Click **Settings → Secrets and variables → Actions**
3. Click **"New repository secret"** and add:

| Secret Name | Value |
|---|---|
| `LEETCODE_SESSION` | Paste the LEETCODE_SESSION value |
| `LEETCODE_CSRF_TOKEN` | Paste the csrftoken value |

---

## Step 3 — Upload These Files to Your Repo

Upload all files from this folder to your `DSA` GitHub repo:

```
sync.py
README.md
SETUP.md
.github/workflows/leetcode-sync.yml
```

---

## Step 4 — Run the First Sync Manually

1. Go to your repo → **Actions** tab
2. Click **"🔄 Sync LeetCode Solutions"**
3. Click **"Run workflow"** → **"Run workflow"**
4. Watch the logs — it will fetch all your accepted solutions!

---

## Step 5 — Sit Back & Relax 🎉

From now on, the workflow runs **automatically every day at midnight UTC (5:30 AM IST)**.

Every time you solve a problem on LeetCode:
- The next morning your solution will appear in this repo ✅
- The README table will be updated automatically ✅
- Everything is committed with a timestamped message ✅

---

## 🔄 Refreshing Expired Cookies

When the sync fails (usually after ~2 weeks), just:
1. Repeat **Step 1** to get new cookie values
2. Go to **Settings → Secrets** and update both secret values
3. Re-run the workflow manually

---

## 🐛 Troubleshooting

| Issue | Fix |
|---|---|
| `Missing secrets` error | Re-add both secrets in Step 2 |
| `401 Unauthorized` | Cookie expired — refresh it (Step 1) |
| `No submissions found` | Make sure you're logged into the right account |
| Workflow not triggering | Check Actions are enabled in repo settings |
