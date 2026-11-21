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
| 🟢 Easy    | **6** |
| 🟡 Medium  | **12** |
| 🔴 Hard    | **1** |
| ⚡ **Total** | **19** |

> 🕐 Last synced: `2026-11-21 00:04 UTC`

## 📋 All Solutions

| # | Problem | Difficulty | Language | Solved On | Topics |
|---|---------|:----------:|:--------:|:---------:|--------|
| `0031` | [Next Permutation](https://leetcode.com/problems/next-permutation/) | 🟡 Medium | `cpp` | 2026-11-13 | Array, Two Pointers |
| `0122` | [Best Time to Buy and Sell Stock II](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/) | 🟡 Medium | `cpp` | 2026-11-13 | Array, Dynamic Programming, Greedy |
| `0164` | [Maximum Gap](https://leetcode.com/problems/maximum-gap/) | 🟡 Medium | `cpp` | 2026-11-12 | Array, Sorting, Bucket Sort, Radix Sort, Pigeonhole Principle |
| `0458` | [Poor Pigs](https://leetcode.com/problems/poor-pigs/) | 🔴 Hard | `cpp` | 2026-11-13 | Math, Dynamic Programming, Combinatorics |
| `0532` | [K-diff Pairs in an Array](https://leetcode.com/problems/k-diff-pairs-in-an-array/) | 🟡 Medium | `cpp` | 2026-11-12 | Array, Hash Table, Two Pointers, Binary Search, Sorting |
| `0900` | [Reordered Power of 2](https://leetcode.com/problems/reordered-power-of-2/) | 🟡 Medium | `cpp` | 2026-11-13 | Hash Table, Math, Sorting, Counting, Enumeration |
| `0917` | [Boats to Save People](https://leetcode.com/problems/boats-to-save-people/) | 🟡 Medium | `cpp` | 2026-11-13 | Array, Two Pointers, Greedy, Sorting, Timsort |
| `1018` | [Largest Perimeter Triangle](https://leetcode.com/problems/largest-perimeter-triangle/) | 🟢 Easy | `cpp` | 2026-11-14 | Array, Math, Greedy, Sorting, Quicksort, Polygons |
| `1033` | [Broken Calculator](https://leetcode.com/problems/broken-calculator/) | 🟡 Medium | `cpp` | 2026-11-20 | Math, Greedy |
| `1128` | [Remove All Adjacent Duplicates In String](https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/) | 🟢 Easy | `cpp` | 2026-11-11 | String, Stack |
| `1879` | [Maximum Score From Removing Stones](https://leetcode.com/problems/maximum-score-from-removing-stones/) | 🟡 Medium | `cpp` | 2026-11-13 | Math, Greedy, Heap (Priority Queue) |
| `1956` | [Maximum Element After Decreasing and Rearranging](https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging/) | 🟡 Medium | `cpp` | 2026-11-13 | Array, Greedy, Sorting |
| `2037` | [Count Square Sum Triples](https://leetcode.com/problems/count-square-sum-triples/) | 🟢 Easy | `cpp` | 2026-11-15 | Math, Enumeration |
| `2212` | [Removing Minimum and Maximum From Array](https://leetcode.com/problems/removing-minimum-and-maximum-from-array/) | 🟡 Medium | `cpp` | 2026-11-13 | Array, Greedy |
| `2361` | [Calculate Digit Sum of a String](https://leetcode.com/problems/calculate-digit-sum-of-a-string/) | 🟢 Easy | `cpp` | 2026-11-18 | String, Simulation |
| `2566` | [Number of Unequal Triplets in Array](https://leetcode.com/problems/number-of-unequal-triplets-in-array/) | 🟢 Easy | `cpp` | 2026-11-15 | Array, Hash Table, Sorting |
| `2706` | [Minimum Score by Changing Two Elements](https://leetcode.com/problems/minimum-score-by-changing-two-elements/) | 🟡 Medium | `cpp` | 2026-11-19 | Array, Greedy, Sorting |
| `3372` | [Longest Strictly Increasing or Strictly Decreasing Subarray](https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/) | 🟢 Easy | `cpp` | 2026-11-12 | Array |
| `4087` | [Maximum Substrings With Distinct Start](https://leetcode.com/problems/maximum-substrings-with-distinct-start/) | 🟡 Medium | `cpp` | 2026-11-12 | Hash Table, String |
<!-- LEETCODE_STATS_END -->

---

<div align="center">

*Auto-synced daily by GitHub Actions · Built by [Rakshit Mishra](https://github.com/Rakshit0229)*

</div>

<img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&customColorList=2,3,12,20,24&height=100&section=footer&animation=fadeIn" width="100%"/>
