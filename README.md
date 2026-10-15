<div align="center">

<img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&customColorList=2,3,12,20,24&height=180&section=header&text=DSA%20Solutions&fontSize=48&fontColor=ffffff&fontAlignY=38&desc=Rakshit%20Mishra%20·%20Auto-synced%20from%20LeetCode&descAlignY=60&descSize=15&animation=fadeIn" width="100%"/>

[![LeetCode](https://img.shields.io/badge/LeetCode-Rakshit02-FFA116?style=for-the-badge&logo=leetcode&logoColor=black)](https://leetcode.com/u/Rakshit02/)
[![Sync Status](https://github.com/Rakshit0229/DSA/actions/workflows/leetcode-sync.yml/badge.svg)](https://github.com/Rakshit0229/DSA/actions/workflows/leetcode-sync.yml)
[![Auto Sync](https://img.shields.io/badge/Auto%20Sync-Daily%20at%20Midnight-38BDF8?style=for-the-badge&logo=github-actions&logoColor=white)](.github/workflows/leetcode-sync.yml)

</div>

---

## 🗂️ Folder Structure

Every solution is stored under its difficulty folder, named with the problem number and slug:

```
DSA/
├── Easy/
│   └── 0001-two-sum/
│       └── solution.py
├── Medium/
│   └── 0003-longest-substring-without-repeating-characters/
│       └── solution.cpp
├── Hard/
│   └── 0004-median-of-two-sorted-arrays/
│       └── solution.py
├── .github/
│   └── workflows/
│       └── leetcode-sync.yml
├── sync.py
└── README.md
```

Each solution file has a header like this:

```python
# ╔══════════════════════════════════════════════╗
#   Problem   : Two Sum
#   Difficulty: Easy
#   Tags      : Array, Hash Table
#   Language  : python3
#   Solved on : 2025-05-11
#   URL       : https://leetcode.com/problems/two-sum/
# ╚══════════════════════════════════════════════╝
```

---

## ⚙️ How It Works

```
LeetCode Account (Rakshit02)
        │
        │  GitHub Actions runs daily at midnight UTC
        ▼
   sync.py fetches all accepted submissions
        │
        ├── Creates  Easy / Medium / Hard folders
        ├── Writes   solution files with headers
        └── Updates  README progress table
        │
        ▼
   git commit & push → this repo
```

---

<!-- LEETCODE_STATS_START -->
## 📊 Progress

| Difficulty | Solved |
|:----------:|:------:|
| 🟢 Easy    | **1** |
| 🟡 Medium  | **1** |
| 🔴 Hard    | **0** |
| ⚡ **Total** | **2** |

> 🕐 Last synced: `2026-10-15 21:34 UTC`

## 📋 All Solutions

| # | Problem | Difficulty | Language | Solved On | Topics |
|---|---------|:----------:|:--------:|:---------:|--------|
| `0378` | [Kth Smallest Element in a Sorted Matrix](https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/) | 🟡 Medium | `cpp` | 2026-10-15 | Array, Binary Search, Sorting, Heap (Priority Queue), Matrix |
| `3163` | [Subarrays Distinct Element Sum of Squares I](https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/) | 🟢 Easy | `cpp` | 2026-10-15 | Array, Hash Table, Binary Indexed Tree, Segment Tree |
<!-- LEETCODE_STATS_END -->

---

<div align="center">

*Auto-synced daily by GitHub Actions · Built by [Rakshit Mishra](https://github.com/Rakshit0229)*

</div>

<img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&customColorList=2,3,12,20,24&height=100&section=footer&animation=fadeIn" width="100%"/>
