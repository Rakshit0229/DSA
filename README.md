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
| 🟢 Easy    | **61** |
| 🟡 Medium  | **9** |
| 🔴 Hard    | **0** |
| ⚡ **Total** | **70** |

> Last synced: 2026-10-06 22:44 UTC

## 📋 All Solutions

| # | Problem | Difficulty | Language | Solved On | Topics |
|---|---------|:----------:|:--------:|:---------:|--------|
| `0001` | [Two Sum](https://leetcode.com/problems/two-sum/) | Easy | `cpp` | 2026-05-09 | Array, Hash Table |
| `0007` | [Reverse Integer](https://leetcode.com/problems/reverse-integer/) | Medium | `cpp` | 2026-09-22 | Math |
| `0009` | [Palindrome Number](https://leetcode.com/problems/palindrome-number/) | Easy | `cpp` | 2026-05-09 | Math |
| `0011` | [Container With Most Water](https://leetcode.com/problems/container-with-most-water/) | Medium | `cpp` | 2026-09-28 | Array, Two Pointers, Greedy |
| `0035` | [Search Insert Position](https://leetcode.com/problems/search-insert-position/) | Easy | `cpp` | 2026-09-27 | Array, Binary Search |
| `0050` | [Pow(x, n)](https://leetcode.com/problems/powx-n/) | Medium | `cpp` | 2026-09-23 | Math, Recursion |
| `0066` | [Plus One](https://leetcode.com/problems/plus-one/) | Easy | `cpp` | 2026-09-28 | Array, Math |
| `0069` | [Sqrt(x)](https://leetcode.com/problems/sqrtx/) | Easy | `cpp` | 2026-10-05 | Math, Binary Search, Newton's Method |
| `0070` | [Climbing Stairs](https://leetcode.com/problems/climbing-stairs/) | Easy | `cpp` | 2026-09-27 | Math, Dynamic Programming, Memoization |
| `0075` | [Sort Colors](https://leetcode.com/problems/sort-colors/) | Medium | `cpp` | 2026-10-06 | Array, Two Pointers, Sorting, Quicksort, Bubble Sort |
| `0118` | [Pascal's Triangle](https://leetcode.com/problems/pascals-triangle/) | Easy | `cpp` | 2026-10-01 | Array, Dynamic Programming |
| `0121` | [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | Easy | `cpp` | 2026-09-25 | Array, Dynamic Programming |
| `0136` | [Single Number](https://leetcode.com/problems/single-number/) | Easy | `cpp` | 2026-09-29 | Array, Bit Manipulation |
| `0169` | [Majority Element](https://leetcode.com/problems/majority-element/) | Easy | `cpp` | 2026-09-29 | Array, Hash Table, Divide and Conquer, Sorting, Counting, Boyer–Moore Majority Vote Algorithm |
| `0190` | [Reverse Bits](https://leetcode.com/problems/reverse-bits/) | Easy | `cpp` | 2026-09-27 | Divide and Conquer, Bit Manipulation |
| `0191` | [Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/) | Easy | `cpp` | 2026-09-19 | Divide and Conquer, Bit Manipulation |
| `0202` | [Happy Number](https://leetcode.com/problems/happy-number/) | Easy | `cpp` | 2026-09-20 | Hash Table, Math, Two Pointers, Floyd's Cycle Finding Algorithm |
| `0217` | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | Easy | `cpp` | 2026-10-01 | Array, Hash Table, Sorting |
| `0231` | [Power of Two](https://leetcode.com/problems/power-of-two/) | Easy | `cpp` | 2026-09-22 | Math, Bit Manipulation, Recursion |
| `0258` | [Add Digits](https://leetcode.com/problems/add-digits/) | Easy | `cpp` | 2026-09-20 | Math, Simulation, Number Theory |
| `0268` | [Missing Number](https://leetcode.com/problems/missing-number/) | Easy | `cpp` | 2026-10-01 | Array, Hash Table, Math, Binary Search, Bit Manipulation, Sorting |
| `0326` | [Power of Three](https://leetcode.com/problems/power-of-three/) | Easy | `cpp` | 2026-09-20 | Math, Recursion |
| `0342` | [Power of Four](https://leetcode.com/problems/power-of-four/) | Easy | `cpp` | 2026-09-20 | Math, Bit Manipulation, Recursion |
| `0349` | [Intersection of Two Arrays](https://leetcode.com/problems/intersection-of-two-arrays/) | Easy | `cpp` | 2026-10-01 | Array, Hash Table, Two Pointers, Binary Search, Sorting |
| `0367` | [Valid Perfect Square](https://leetcode.com/problems/valid-perfect-square/) | Easy | `cpp` | 2026-09-20 | Math, Binary Search |
| `0412` | [Fizz Buzz](https://leetcode.com/problems/fizz-buzz/) | Easy | `cpp` | 2026-09-19 | Math, String, Simulation |
| `0448` | [Find All Numbers Disappeared in an Array](https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/) | Easy | `cpp` | 2026-10-02 | Array, Hash Table |
| `0476` | [Number Complement](https://leetcode.com/problems/number-complement/) | Easy | `cpp` | 2026-09-21 | Bit Manipulation |
| `0507` | [Perfect Number](https://leetcode.com/problems/perfect-number/) | Easy | `cpp` | 2026-09-20 | Math |
| `0628` | [Maximum Product of Three Numbers](https://leetcode.com/problems/maximum-product-of-three-numbers/) | Easy | `cpp` | 2026-10-01 | Array, Math, Sorting |
| `0645` | [Set Mismatch](https://leetcode.com/problems/set-mismatch/) | Easy | `cpp` | 2026-10-02 | Array, Hash Table, Bit Manipulation, Sorting |
| `0724` | [Find Pivot Index](https://leetcode.com/problems/find-pivot-index/) | Easy | `cpp` | 2026-10-02 | Array, Prefix Sum |
| `0728` | [Self Dividing Numbers](https://leetcode.com/problems/self-dividing-numbers/) | Easy | `cpp` | 2026-09-24 | Math |
| `0748` | [Largest Number At Least Twice of Others](https://leetcode.com/problems/largest-number-at-least-twice-of-others/) | Easy | `cpp` | 2026-10-06 | Array, Sorting |
| `0792` | [Binary Search](https://leetcode.com/problems/binary-search/) | Easy | `cpp` | 2026-09-26 | Array, Binary Search |
| `0882` | [Peak Index in a Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array/) | Medium | `cpp` | 2026-10-05 | Array, Binary Search, Ternary Search |
| `0890` | [Lemonade Change](https://leetcode.com/problems/lemonade-change/) | Easy | `cpp` | 2026-10-06 | Array, Greedy |
| `0898` | [Transpose Matrix](https://leetcode.com/problems/transpose-matrix/) | Easy | `cpp` | 2026-10-05 | Array, Matrix, Simulation |
| `0909` | [Stone Game](https://leetcode.com/problems/stone-game/) | Medium | `cpp` | 2026-08-07 | Array, Math, Dynamic Programming, Minimax, Game Theory, Zero-Sum Game |
| `0932` | [Monotonic Array](https://leetcode.com/problems/monotonic-array/) | Easy | `cpp` | 2026-10-03 | Array |
| `0941` | [Sort Array By Parity](https://leetcode.com/problems/sort-array-by-parity/) | Easy | `cpp` | 2026-10-06 | Array, Two Pointers, Sorting |
| `0944` | [Smallest Range I](https://leetcode.com/problems/smallest-range-i/) | Easy | `cpp` | 2026-10-06 | Array, Math |
| `0978` | [Valid Mountain Array](https://leetcode.com/problems/valid-mountain-array/) | Easy | `cpp` | 2026-09-30 | Array |
| `0981` | [Delete Columns to Make Sorted](https://leetcode.com/problems/delete-columns-to-make-sorted/) | Easy | `cpp` | 2026-10-03 | Array, String, Longest Increasing Subsequence |
| `1013` | [Fibonacci Number](https://leetcode.com/problems/fibonacci-number/) | Easy | `cpp` | 2026-09-19 | Math, Dynamic Programming, Recursion, Memoization |
| `1054` | [Complement of Base 10 Integer](https://leetcode.com/problems/complement-of-base-10-integer/) | Easy | `cpp` | 2026-09-22 | Bit Manipulation |
| `1168` | [Duplicate Zeros](https://leetcode.com/problems/duplicate-zeros/) | Easy | `cpp` | 2026-10-04 | Array, Two Pointers |
| `1236` | [N-th Tribonacci Number](https://leetcode.com/problems/n-th-tribonacci-number/) | Easy | `cpp` | 2026-10-03 | Math, Dynamic Programming, Memoization |
| `1319` | [Unique Number of Occurrences](https://leetcode.com/problems/unique-number-of-occurrences/) | Easy | `cpp` | 2026-09-27 | Array, Hash Table |
| `1406` | [Subtract the Product and Sum of Digits of an Integer](https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/) | Easy | `cpp` | 2026-09-19 | Math |
| `1426` | [Find N Unique Integers Sum up to Zero](https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/) | Easy | `cpp` | 2026-10-04 | Array, Math |
| `1444` | [Number of Steps to Reduce a Number to Zero](https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/) | Easy | `cpp` | 2026-09-20 | Math, Bit Manipulation |
| `1510` | [Find Lucky Integer in an Array](https://leetcode.com/problems/find-lucky-integer-in-an-array/) | Easy | `cpp` | 2026-10-04 | Array, Hash Table, Counting |
| `1646` | [Kth Missing Positive Number](https://leetcode.com/problems/kth-missing-positive-number/) | Easy | `cpp` | 2026-10-01 | Array, Binary Search |
| `1848` | [Sum of Unique Elements](https://leetcode.com/problems/sum-of-unique-elements/) | Easy | `cpp` | 2026-10-03 | Array, Hash Table, Counting |
| `2102` | [Find the Middle Index in Array](https://leetcode.com/problems/find-the-middle-index-in-array/) | Easy | `cpp` | 2026-10-02 | Array, Prefix Sum |
| `2181` | [Smallest Index With Equal Value](https://leetcode.com/problems/smallest-index-with-equal-value/) | Easy | `cpp` | 2026-10-01 | Array |
| `2274` | [Keep Multiplying Found Values by Two](https://leetcode.com/problems/keep-multiplying-found-values-by-two/) | Easy | `cpp` | 2026-10-06 | Array, Hash Table, Sorting, Simulation |
| `2383` | [Add Two Integers](https://leetcode.com/problems/add-two-integers/) | Easy | `cpp` | 2026-06-28 | Math |
| `2508` | [Maximum Sum of an Hourglass](https://leetcode.com/problems/maximum-sum-of-an-hourglass/) | Medium | `cpp` | 2026-10-05 | Array, Matrix, Prefix Sum |
| `2519` | [Find The Original Array of Prefix Xor](https://leetcode.com/problems/find-the-original-array-of-prefix-xor/) | Medium | `cpp` | 2026-09-29 | Array, Bit Manipulation |
| `3869` | [Smallest Index With Digit Sum Equal to Index](https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/) | Easy | `cpp` | 2026-09-29 | Array, Math |
| `3918` | [Check Divisibility by Digit Sum and Product](https://leetcode.com/problems/check-divisibility-by-digit-sum-and-product/) | Easy | `cpp` | 2026-10-03 | Math |
| `3995` | [GCD of Odd and Even Sums](https://leetcode.com/problems/gcd-of-odd-and-even-sums/) | Easy | `cpp` | 2026-10-02 | Math, Number Theory |
| `4058` | [Compute Alternating Sum](https://leetcode.com/problems/compute-alternating-sum/) | Easy | `cpp` | 2026-09-27 | Array, Simulation |
| `4245` | [Count Commas in Range](https://leetcode.com/problems/count-commas-in-range/) | Easy | `cpp` | 2026-10-03 | Math |
| `4252` | [First Unique Even Element](https://leetcode.com/problems/first-unique-even-element/) | Easy | `cpp` | 2026-09-27 | Array, Hash Table, Counting |
| `4256` | [Construct Uniform Parity Array I](https://leetcode.com/problems/construct-uniform-parity-array-i/) | Easy | `cpp` | 2026-10-03 | Array, Math |
| `4354` | [Unique Middle Element](https://leetcode.com/problems/unique-middle-element/) | Easy | `cpp` | 2026-09-27 | Array, Counting |
| `4398` | [Transform Array Using Pair Operations](https://leetcode.com/problems/transform-array-using-pair-operations/) | Medium | `cpp` | 2026-09-27 | Array, Brainteaser |
<!-- LEETCODE_STATS_END -->

---

<div align="center">

*Auto-synced daily by GitHub Actions · Built by [Rakshit Mishra](https://github.com/Rakshit0229)*

</div>

<img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&customColorList=2,3,12,20,24&height=100&section=footer&animation=fadeIn" width="100%"/>
