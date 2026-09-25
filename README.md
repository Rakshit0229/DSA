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
| 🟢 Easy    | **19** |
| 🟡 Medium  | **3** |
| 🔴 Hard    | **0** |
| ⚡ **Total** | **22** |

> 🕐 Last synced: `2026-09-25 21:46 UTC` — auto-updates every day at 12:00 AM IST

## 📋 All Solutions

| # | Problem | Difficulty | Language | Solved On | Topics |
|---|---------|:----------:|:--------:|:---------:|--------|
| `0001` | [Two Sum](https://leetcode.com/problems/two-sum/) | Easy | `cpp` | 2026-05-09 | Array, Hash Table |
| `0007` | [Reverse Integer](https://leetcode.com/problems/reverse-integer/) | Medium | `cpp` | 2026-09-22 | Math |
| `0009` | [Palindrome Number](https://leetcode.com/problems/palindrome-number/) | Easy | `cpp` | 2026-05-09 | Math |
| `0050` | [Pow(x, n)](https://leetcode.com/problems/powx-n/) | Medium | `cpp` | 2026-09-23 | Math, Recursion |
| `0121` | [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | Easy | `cpp` | 2026-09-25 | Array, Dynamic Programming |
| `0191` | [Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/) | Easy | `cpp` | 2026-09-19 | Divide and Conquer, Bit Manipulation |
| `0202` | [Happy Number](https://leetcode.com/problems/happy-number/) | Easy | `cpp` | 2026-09-20 | Hash Table, Math, Two Pointers, Floyd's Cycle Finding Algorithm |
| `0231` | [Power of Two](https://leetcode.com/problems/power-of-two/) | Easy | `cpp` | 2026-09-22 | Math, Bit Manipulation, Recursion |
| `0258` | [Add Digits](https://leetcode.com/problems/add-digits/) | Easy | `cpp` | 2026-09-20 | Math, Simulation, Number Theory |
| `0326` | [Power of Three](https://leetcode.com/problems/power-of-three/) | Easy | `cpp` | 2026-09-20 | Math, Recursion |
| `0342` | [Power of Four](https://leetcode.com/problems/power-of-four/) | Easy | `cpp` | 2026-09-20 | Math, Bit Manipulation, Recursion |
| `0367` | [Valid Perfect Square](https://leetcode.com/problems/valid-perfect-square/) | Easy | `cpp` | 2026-09-20 | Math, Binary Search |
| `0412` | [Fizz Buzz](https://leetcode.com/problems/fizz-buzz/) | Easy | `cpp` | 2026-09-19 | Math, String, Simulation |
| `0476` | [Number Complement](https://leetcode.com/problems/number-complement/) | Easy | `cpp` | 2026-09-21 | Bit Manipulation |
| `0507` | [Perfect Number](https://leetcode.com/problems/perfect-number/) | Easy | `cpp` | 2026-09-20 | Math |
| `0728` | [Self Dividing Numbers](https://leetcode.com/problems/self-dividing-numbers/) | Easy | `cpp` | 2026-09-24 | Math |
| `0909` | [Stone Game](https://leetcode.com/problems/stone-game/) | Medium | `cpp` | 2026-08-07 | Array, Math, Dynamic Programming, Minimax, Game Theory, Zero-Sum Game |
| `1013` | [Fibonacci Number](https://leetcode.com/problems/fibonacci-number/) | Easy | `cpp` | 2026-09-19 | Math, Dynamic Programming, Recursion, Memoization |
| `1054` | [Complement of Base 10 Integer](https://leetcode.com/problems/complement-of-base-10-integer/) | Easy | `cpp` | 2026-09-22 | Bit Manipulation |
| `1406` | [Subtract the Product and Sum of Digits of an Integer](https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/) | Easy | `cpp` | 2026-09-19 | Math |
| `1444` | [Number of Steps to Reduce a Number to Zero](https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/) | Easy | `cpp` | 2026-09-20 | Math, Bit Manipulation |
| `2383` | [Add Two Integers](https://leetcode.com/problems/add-two-integers/) | Easy | `cpp` | 2026-06-28 | Math |
<!-- LEETCODE_STATS_END -->

---

<div align="center">

*Auto-synced daily by GitHub Actions · Built by [Rakshit Mishra](https://github.com/Rakshit0229)*

</div>

<img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&customColorList=2,3,12,20,24&height=100&section=footer&animation=fadeIn" width="100%"/>
