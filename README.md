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
| 🟢 Easy    | **12** |
| 🟡 Medium  | **8** |
| 🔴 Hard    | **0** |
| ⚡ **Total** | **20** |

> 🕐 Last synced: `2026-11-12 00:53 UTC`

## 📋 All Solutions

| # | Problem | Difficulty | Language | Solved On | Topics |
|---|---------|:----------:|:--------:|:---------:|--------|
| `0048` | [Rotate Image](https://leetcode.com/problems/rotate-image/) | 🟡 Medium | `cpp` | 2026-11-09 | Array, Math, Matrix |
| `0344` | [Reverse String](https://leetcode.com/problems/reverse-string/) | 🟢 Easy | `cpp` | 2026-11-10 | Two Pointers, String |
| `0874` | [Backspace String Compare](https://leetcode.com/problems/backspace-string-compare/) | 🟢 Easy | `cpp` | 2026-11-11 | Two Pointers, String, Stack, Simulation |
| `1128` | [Remove All Adjacent Duplicates In String](https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/) | 🟢 Easy | `cpp` | 2026-11-11 | String, Stack |
| `1488` | [Sort Integers by The Power Value](https://leetcode.com/problems/sort-integers-by-the-power-value/) | 🟡 Medium | `cpp` | 2026-11-11 | Dynamic Programming, Memoization, Sorting |
| `1807` | [Partitioning Into Minimum Number Of Deci-Binary Numbers](https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/) | 🟡 Medium | `cpp` | 2026-11-11 | String, Greedy |
| `1951` | [Find the Winner of the Circular Game](https://leetcode.com/problems/find-the-winner-of-the-circular-game/) | 🟡 Medium | `cpp` | 2026-11-10 | Array, Math, Recursion, Queue, Simulation |
| `2015` | [Determine Whether Matrix Can Be Obtained By Rotation](https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/) | 🟢 Easy | `cpp` | 2026-11-09 | Array, Matrix |
| `2365` | [Percentage of Letter in String](https://leetcode.com/problems/percentage-of-letter-in-string/) | 🟢 Easy | `cpp` | 2026-11-09 | String |
| `2470` | [Removing Stars From a String](https://leetcode.com/problems/removing-stars-from-a-string/) | 🟡 Medium | `cpp` | 2026-11-11 | String, Stack, Simulation |
| `2608` | [Count the Digits That Divide a Number](https://leetcode.com/problems/count-the-digits-that-divide-a-number/) | 🟢 Easy | `cpp` | 2026-11-09 | Math |
| `2748` | [Calculate Delayed Arrival Time](https://leetcode.com/problems/calculate-delayed-arrival-time/) | 🟢 Easy | `cpp` | 2026-11-09 | Math |
| `2917` | [Count Pairs Whose Sum is Less than Target](https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/) | 🟢 Easy | `cpp` | 2026-11-09 | Array, Two Pointers, Binary Search, Sorting |
| `3171` | [Minimum Equal Sum of Two Arrays After Replacing Zeros](https://leetcode.com/problems/minimum-equal-sum-of-two-arrays-after-replacing-zeros/) | 🟡 Medium | `cpp` | 2026-11-11 | Array, Greedy |
| `3194` | [Find Words Containing Character](https://leetcode.com/problems/find-words-containing-character/) | 🟢 Easy | `cpp` | 2026-11-09 | Array, String |
| `3221` | [Find the Peaks](https://leetcode.com/problems/find-the-peaks/) | 🟢 Easy | `cpp` | 2026-11-09 | Array, Enumeration |
| `3226` | [Minimum Number Game](https://leetcode.com/problems/minimum-number-game/) | 🟢 Easy | `cpp` | 2026-11-09 | Array, Sorting, Heap (Priority Queue), Simulation |
| `3241` | [Divide Array Into Arrays With Max Difference](https://leetcode.com/problems/divide-array-into-arrays-with-max-difference/) | 🟡 Medium | `cpp` | 2026-11-11 | Array, Greedy, Sorting |
| `3321` | [Type of Triangle](https://leetcode.com/problems/type-of-triangle/) | 🟢 Easy | `cpp` | 2026-11-09 | Array, Math, Sorting, Polygons |
| `4363` | [Minimum Total Price After Applying Discounts](https://leetcode.com/problems/minimum-total-price-after-applying-discounts/) | 🟡 Medium | `cpp` | 2026-11-11 | Array, Two Pointers, Greedy, Sorting |
<!-- LEETCODE_STATS_END -->

---

<div align="center">

*Auto-synced daily by GitHub Actions · Built by [Rakshit Mishra](https://github.com/Rakshit0229)*

</div>

<img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&customColorList=2,3,12,20,24&height=100&section=footer&animation=fadeIn" width="100%"/>
