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
| 🟢 Easy    | **112** |
| 🟡 Medium  | **64** |
| 🔴 Hard    | **3** |
| ⚡ **Total** | **179** |

> 🕐 Last synced: `2026-10-24 22:04 UTC`

## 📋 All Solutions

| # | Problem | Difficulty | Language | Solved On | Topics |
|---|---------|:----------:|:--------:|:---------:|--------|
| `0001` | [Two Sum](https://leetcode.com/problems/two-sum/) | 🟢 Easy | `cpp` | 2026-05-09 | Array, Hash Table |
| `0007` | [Reverse Integer](https://leetcode.com/problems/reverse-integer/) | 🟡 Medium | `cpp` | 2026-09-22 | Math |
| `0009` | [Palindrome Number](https://leetcode.com/problems/palindrome-number/) | 🟢 Easy | `cpp` | 2026-05-09 | Math |
| `0011` | [Container With Most Water](https://leetcode.com/problems/container-with-most-water/) | 🟡 Medium | `cpp` | 2026-09-28 | Array, Two Pointers, Greedy |
| `0033` | [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/) | 🟡 Medium | `cpp` | 2026-10-14 | Array, Binary Search |
| `0034` | [Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/) | 🟡 Medium | `cpp` | 2026-10-11 | Array, Binary Search |
| `0035` | [Search Insert Position](https://leetcode.com/problems/search-insert-position/) | 🟢 Easy | `cpp` | 2026-09-27 | Array, Binary Search |
| `0046` | [Permutations](https://leetcode.com/problems/permutations/) | 🟡 Medium | `cpp` | 2026-10-10 | Array, Backtracking |
| `0050` | [Pow(x, n)](https://leetcode.com/problems/powx-n/) | 🟡 Medium | `cpp` | 2026-09-23 | Math, Recursion |
| `0054` | [Spiral Matrix](https://leetcode.com/problems/spiral-matrix/) | 🟡 Medium | `cpp` | 2026-10-16 | Array, Matrix, Simulation |
| `0066` | [Plus One](https://leetcode.com/problems/plus-one/) | 🟢 Easy | `cpp` | 2026-09-28 | Array, Math |
| `0069` | [Sqrt(x)](https://leetcode.com/problems/sqrtx/) | 🟢 Easy | `cpp` | 2026-10-05 | Math, Binary Search, Newton's Method |
| `0070` | [Climbing Stairs](https://leetcode.com/problems/climbing-stairs/) | 🟢 Easy | `cpp` | 2026-09-27 | Math, Dynamic Programming, Memoization |
| `0075` | [Sort Colors](https://leetcode.com/problems/sort-colors/) | 🟡 Medium | `cpp` | 2026-10-06 | Array, Two Pointers, Sorting, Quicksort, Bubble Sort |
| `0078` | [Subsets](https://leetcode.com/problems/subsets/) | 🟡 Medium | `cpp` | 2026-10-15 | Array, Backtracking, Bit Manipulation |
| `0081` | [Search in Rotated Sorted Array II](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/) | 🟡 Medium | `cpp` | 2026-10-22 | Array, Binary Search |
| `0118` | [Pascal's Triangle](https://leetcode.com/problems/pascals-triangle/) | 🟢 Easy | `cpp` | 2026-10-01 | Array, Dynamic Programming |
| `0119` | [Pascal's Triangle II](https://leetcode.com/problems/pascals-triangle-ii/) | 🟢 Easy | `cpp` | 2026-10-23 | Array, Dynamic Programming |
| `0121` | [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | 🟢 Easy | `cpp` | 2026-09-25 | Array, Dynamic Programming |
| `0136` | [Single Number](https://leetcode.com/problems/single-number/) | 🟢 Easy | `cpp` | 2026-09-29 | Array, Bit Manipulation |
| `0137` | [Single Number II](https://leetcode.com/problems/single-number-ii/) | 🟡 Medium | `cpp` | 2026-10-15 | Array, Bit Manipulation |
| `0153` | [Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/) | 🟡 Medium | `cpp` | 2026-10-22 | Array, Binary Search |
| `0154` | [Find Minimum in Rotated Sorted Array II](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/) | 🔴 Hard | `cpp` | 2026-10-22 | Array, Binary Search |
| `0162` | [Find Peak Element](https://leetcode.com/problems/find-peak-element/) | 🟡 Medium | `cpp` | 2026-10-13 | Array, Binary Search |
| `0167` | [Two Sum II - Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) | 🟡 Medium | `cpp` | 2026-10-11 | Array, Two Pointers, Binary Search |
| `0169` | [Majority Element](https://leetcode.com/problems/majority-element/) | 🟢 Easy | `cpp` | 2026-09-29 | Array, Hash Table, Divide and Conquer, Sorting, Counting, Boyer–Moore Majority Vote Algorithm |
| `0189` | [Rotate Array](https://leetcode.com/problems/rotate-array/) | 🟡 Medium | `cpp` | 2026-10-17 | Array, Math, Two Pointers |
| `0190` | [Reverse Bits](https://leetcode.com/problems/reverse-bits/) | 🟢 Easy | `cpp` | 2026-09-27 | Divide and Conquer, Bit Manipulation |
| `0191` | [Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/) | 🟢 Easy | `cpp` | 2026-09-19 | Divide and Conquer, Bit Manipulation |
| `0202` | [Happy Number](https://leetcode.com/problems/happy-number/) | 🟢 Easy | `cpp` | 2026-09-20 | Hash Table, Math, Two Pointers, Floyd's Cycle Finding Algorithm |
| `0204` | [Count Primes](https://leetcode.com/problems/count-primes/) | 🟡 Medium | `cpp` | 2026-10-12 | Array, Math, Enumeration, Number Theory, Primality Test, Sieve Theory, Prime Number Sieve |
| `0215` | [Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/) | 🟡 Medium | `cpp` | 2026-10-12 | Array, Divide and Conquer, Sorting, Heap (Priority Queue), Quickselect |
| `0217` | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | 🟢 Easy | `cpp` | 2026-10-01 | Array, Hash Table, Sorting |
| `0223` | [Rectangle Area](https://leetcode.com/problems/rectangle-area/) | 🟡 Medium | `cpp` | 2026-10-17 | Math, Geometry |
| `0231` | [Power of Two](https://leetcode.com/problems/power-of-two/) | 🟢 Easy | `cpp` | 2026-09-22 | Math, Bit Manipulation, Recursion |
| `0233` | [Number of Digit One](https://leetcode.com/problems/number-of-digit-one/) | 🔴 Hard | `cpp` | 2026-10-17 | Math, Dynamic Programming, Recursion |
| `0238` | [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/) | 🟡 Medium | `cpp` | 2026-10-15 | Array, Prefix Sum |
| `0258` | [Add Digits](https://leetcode.com/problems/add-digits/) | 🟢 Easy | `cpp` | 2026-09-20 | Math, Simulation, Number Theory |
| `0260` | [Single Number III](https://leetcode.com/problems/single-number-iii/) | 🟡 Medium | `cpp` | 2026-10-15 | Array, Bit Manipulation |
| `0263` | [Ugly Number](https://leetcode.com/problems/ugly-number/) | 🟢 Easy | `cpp` | 2026-10-17 | Math |
| `0264` | [Ugly Number II](https://leetcode.com/problems/ugly-number-ii/) | 🟡 Medium | `cpp` | 2026-10-21 | Hash Table, Math, Dynamic Programming, Heap (Priority Queue) |
| `0268` | [Missing Number](https://leetcode.com/problems/missing-number/) | 🟢 Easy | `cpp` | 2026-10-01 | Array, Hash Table, Math, Binary Search, Bit Manipulation, Sorting |
| `0287` | [Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/) | 🟡 Medium | `cpp` | 2026-10-14 | Array, Two Pointers, Binary Search, Bit Manipulation, Pigeonhole Principle, Floyd's Cycle Finding Algorithm |
| `0292` | [Nim Game](https://leetcode.com/problems/nim-game/) | 🟢 Easy | `cpp` | 2026-10-16 | Math, Brainteaser, Minimax, Game Theory, Nim Game, Impartial Game |
| `0319` | [Bulb Switcher](https://leetcode.com/problems/bulb-switcher/) | 🟡 Medium | `cpp` | 2026-10-16 | Math, Brainteaser |
| `0326` | [Power of Three](https://leetcode.com/problems/power-of-three/) | 🟢 Easy | `cpp` | 2026-09-20 | Math, Recursion |
| `0342` | [Power of Four](https://leetcode.com/problems/power-of-four/) | 🟢 Easy | `cpp` | 2026-09-20 | Math, Bit Manipulation, Recursion |
| `0343` | [Integer Break](https://leetcode.com/problems/integer-break/) | 🟡 Medium | `cpp` | 2026-10-23 | Math, Dynamic Programming |
| `0349` | [Intersection of Two Arrays](https://leetcode.com/problems/intersection-of-two-arrays/) | 🟢 Easy | `cpp` | 2026-10-01 | Array, Hash Table, Two Pointers, Binary Search, Sorting |
| `0350` | [Intersection of Two Arrays II](https://leetcode.com/problems/intersection-of-two-arrays-ii/) | 🟢 Easy | `cpp` | 2026-10-17 | Array, Hash Table, Two Pointers, Binary Search, Sorting |
| `0357` | [Count Numbers with Unique Digits](https://leetcode.com/problems/count-numbers-with-unique-digits/) | 🟡 Medium | `cpp` | 2026-10-17 | Math, Dynamic Programming, Backtracking |
| `0367` | [Valid Perfect Square](https://leetcode.com/problems/valid-perfect-square/) | 🟢 Easy | `cpp` | 2026-09-20 | Math, Binary Search |
| `0371` | [Sum of Two Integers](https://leetcode.com/problems/sum-of-two-integers/) | 🟡 Medium | `cpp` | 2026-10-18 | Math, Bit Manipulation |
| `0378` | [Kth Smallest Element in a Sorted Matrix](https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/) | 🟡 Medium | `cpp` | 2026-10-15 | Array, Binary Search, Sorting, Heap (Priority Queue), Matrix |
| `0412` | [Fizz Buzz](https://leetcode.com/problems/fizz-buzz/) | 🟢 Easy | `cpp` | 2026-09-19 | Math, String, Simulation |
| `0442` | [Find All Duplicates in an Array](https://leetcode.com/problems/find-all-duplicates-in-an-array/) | 🟡 Medium | `cpp` | 2026-10-15 | Array, Hash Table, Sorting |
| `0448` | [Find All Numbers Disappeared in an Array](https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/) | 🟢 Easy | `cpp` | 2026-10-02 | Array, Hash Table |
| `0453` | [Minimum Moves to Equal Array Elements](https://leetcode.com/problems/minimum-moves-to-equal-array-elements/) | 🟡 Medium | `cpp` | 2026-10-24 | Array, Math |
| `0461` | [Hamming Distance](https://leetcode.com/problems/hamming-distance/) | 🟢 Easy | `cpp` | 2026-10-17 | Bit Manipulation |
| `0462` | [Minimum Moves to Equal Array Elements II](https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/) | 🟡 Medium | `cpp` | 2026-10-24 | Array, Math, Sorting |
| `0476` | [Number Complement](https://leetcode.com/problems/number-complement/) | 🟢 Easy | `cpp` | 2026-09-21 | Bit Manipulation |
| `0477` | [Total Hamming Distance](https://leetcode.com/problems/total-hamming-distance/) | 🟡 Medium | `cpp` | 2026-10-19 | Array, Math, Bit Manipulation |
| `0496` | [Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/) | 🟢 Easy | `cpp` | 2026-10-14 | Array, Hash Table, Stack, Monotonic Stack |
| `0507` | [Perfect Number](https://leetcode.com/problems/perfect-number/) | 🟢 Easy | `cpp` | 2026-09-20 | Math |
| `0540` | [Single Element in a Sorted Array](https://leetcode.com/problems/single-element-in-a-sorted-array/) | 🟡 Medium | `cpp` | 2026-10-22 | Array, Binary Search |
| `0628` | [Maximum Product of Three Numbers](https://leetcode.com/problems/maximum-product-of-three-numbers/) | 🟢 Easy | `cpp` | 2026-10-01 | Array, Math, Sorting |
| `0633` | [Sum of Square Numbers](https://leetcode.com/problems/sum-of-square-numbers/) | 🟡 Medium | `cpp` | 2026-10-13 | Math, Two Pointers, Binary Search |
| `0645` | [Set Mismatch](https://leetcode.com/problems/set-mismatch/) | 🟢 Easy | `cpp` | 2026-10-02 | Array, Hash Table, Bit Manipulation, Sorting |
| `0658` | [Find K Closest Elements](https://leetcode.com/problems/find-k-closest-elements/) | 🟡 Medium | `cpp` | 2026-10-20 | Array, Two Pointers, Binary Search, Sliding Window, Sorting, Heap (Priority Queue) |
| `0719` | [Find K-th Smallest Pair Distance](https://leetcode.com/problems/find-k-th-smallest-pair-distance/) | 🔴 Hard | `cpp` | 2026-10-17 | Array, Two Pointers, Binary Search, Sorting |
| `0724` | [Find Pivot Index](https://leetcode.com/problems/find-pivot-index/) | 🟢 Easy | `cpp` | 2026-10-02 | Array, Prefix Sum |
| `0728` | [Self Dividing Numbers](https://leetcode.com/problems/self-dividing-numbers/) | 🟢 Easy | `cpp` | 2026-09-24 | Math |
| `0745` | [Find Smallest Letter Greater Than Target](https://leetcode.com/problems/find-smallest-letter-greater-than-target/) | 🟢 Easy | `cpp` | 2026-10-22 | Array, Binary Search |
| `0748` | [Largest Number At Least Twice of Others](https://leetcode.com/problems/largest-number-at-least-twice-of-others/) | 🟢 Easy | `cpp` | 2026-10-06 | Array, Sorting |
| `0782` | [Jewels and Stones](https://leetcode.com/problems/jewels-and-stones/) | 🟢 Easy | `cpp` | 2026-10-10 | Hash Table, String |
| `0792` | [Binary Search](https://leetcode.com/problems/binary-search/) | 🟢 Easy | `cpp` | 2026-09-26 | Array, Binary Search |
| `0882` | [Peak Index in a Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array/) | 🟡 Medium | `cpp` | 2026-10-05 | Array, Binary Search, Ternary Search |
| `0890` | [Lemonade Change](https://leetcode.com/problems/lemonade-change/) | 🟢 Easy | `cpp` | 2026-10-06 | Array, Greedy |
| `0898` | [Transpose Matrix](https://leetcode.com/problems/transpose-matrix/) | 🟢 Easy | `cpp` | 2026-10-05 | Array, Matrix, Simulation |
| `0909` | [Stone Game](https://leetcode.com/problems/stone-game/) | 🟡 Medium | `cpp` | 2026-08-07 | Array, Math, Dynamic Programming, Minimax, Game Theory, Zero-Sum Game |
| `0932` | [Monotonic Array](https://leetcode.com/problems/monotonic-array/) | 🟢 Easy | `cpp` | 2026-10-03 | Array |
| `0941` | [Sort Array By Parity](https://leetcode.com/problems/sort-array-by-parity/) | 🟢 Easy | `cpp` | 2026-10-06 | Array, Two Pointers, Sorting |
| `0944` | [Smallest Range I](https://leetcode.com/problems/smallest-range-i/) | 🟢 Easy | `cpp` | 2026-10-06 | Array, Math |
| `0958` | [Sort Array By Parity II](https://leetcode.com/problems/sort-array-by-parity-ii/) | 🟢 Easy | `cpp` | 2026-10-07 | Array, Two Pointers, Sorting |
| `0968` | [Beautiful Array](https://leetcode.com/problems/beautiful-array/) | 🟡 Medium | `cpp` | 2026-10-20 | Array, Math, Divide and Conquer |
| `0978` | [Valid Mountain Array](https://leetcode.com/problems/valid-mountain-array/) | 🟢 Easy | `cpp` | 2026-09-30 | Array |
| `0981` | [Delete Columns to Make Sorted](https://leetcode.com/problems/delete-columns-to-make-sorted/) | 🟢 Easy | `cpp` | 2026-10-03 | Array, String, Longest Increasing Subsequence |
| `1013` | [Fibonacci Number](https://leetcode.com/problems/fibonacci-number/) | 🟢 Easy | `cpp` | 2026-09-19 | Math, Dynamic Programming, Recursion, Memoization |
| `1019` | [Squares of a Sorted Array](https://leetcode.com/problems/squares-of-a-sorted-array/) | 🟢 Easy | `cpp` | 2026-10-07 | Array, Two Pointers, Sorting |
| `1031` | [Add to Array-Form of Integer](https://leetcode.com/problems/add-to-array-form-of-integer/) | 🟢 Easy | `cpp` | 2026-10-07 | Array, Math |
| `1047` | [Maximize Sum Of Array After K Negations](https://leetcode.com/problems/maximize-sum-of-array-after-k-negations/) | 🟢 Easy | `cpp` | 2026-10-07 | Array, Greedy, Sorting |
| `1054` | [Complement of Base 10 Integer](https://leetcode.com/problems/complement-of-base-10-integer/) | 🟢 Easy | `cpp` | 2026-09-22 | Bit Manipulation |
| `1086` | [Divisor Game](https://leetcode.com/problems/divisor-game/) | 🟢 Easy | `cpp` | 2026-10-16 | Math, Dynamic Programming, Brainteaser, Game Theory, Impartial Game |
| `1137` | [Height Checker](https://leetcode.com/problems/height-checker/) | 🟢 Easy | `cpp` | 2026-10-07 | Array, Sorting, Counting Sort, Bubble Sort |
| `1168` | [Duplicate Zeros](https://leetcode.com/problems/duplicate-zeros/) | 🟢 Easy | `cpp` | 2026-10-04 | Array, Two Pointers |
| `1210` | [Mean of Array After Removing Some Elements](https://leetcode.com/problems/mean-of-array-after-removing-some-elements/) | 🟢 Easy | `cpp` | 2026-10-09 | Array, Sorting |
| `1221` | [Element Appearing More Than 25% In Sorted Array](https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/) | 🟢 Easy | `cpp` | 2026-10-08 | Array |
| `1231` | [Replace Elements with Greatest Element on Right Side](https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/) | 🟢 Easy | `cpp` | 2026-10-08 | Array |
| `1236` | [N-th Tribonacci Number](https://leetcode.com/problems/n-th-tribonacci-number/) | 🟢 Easy | `cpp` | 2026-10-03 | Math, Dynamic Programming, Memoization |
| `1293` | [Three Consecutive Odds](https://leetcode.com/problems/three-consecutive-odds/) | 🟢 Easy | `cpp` | 2026-10-09 | Array |
| `1319` | [Unique Number of Occurrences](https://leetcode.com/problems/unique-number-of-occurrences/) | 🟢 Easy | `cpp` | 2026-09-27 | Array, Hash Table |
| `1355` | [Minimum Deletions to Make Array Beautiful](https://leetcode.com/problems/minimum-deletions-to-make-array-beautiful/) | 🟡 Medium | `cpp` | 2026-10-18 | Array, Stack, Greedy |
| `1395` | [Minimum Time Visiting All Points](https://leetcode.com/problems/minimum-time-visiting-all-points/) | 🟢 Easy | `cpp` | 2026-10-16 | Array, Math, Geometry |
| `1406` | [Subtract the Product and Sum of Digits of an Integer](https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/) | 🟢 Easy | `cpp` | 2026-09-19 | Math |
| `1421` | [Find Numbers with Even Number of Digits](https://leetcode.com/problems/find-numbers-with-even-number-of-digits/) | 🟢 Easy | `cpp` | 2026-10-08 | Array, Math |
| `1426` | [Find N Unique Integers Sum up to Zero](https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/) | 🟢 Easy | `cpp` | 2026-10-04 | Array, Math |
| `1444` | [Number of Steps to Reduce a Number to Zero](https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/) | 🟢 Easy | `cpp` | 2026-09-20 | Math, Bit Manipulation |
| `1448` | [Maximum 69 Number](https://leetcode.com/problems/maximum-69-number/) | 🟢 Easy | `cpp` | 2026-10-17 | Math, Greedy |
| `1476` | [Count Negative Numbers in a Sorted Matrix](https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/) | 🟢 Easy | `cpp` | 2026-10-08 | Array, Binary Search, Matrix |
| `1482` | [How Many Numbers Are Smaller Than the Current Number](https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/) | 🟢 Easy | `cpp` | 2026-10-08 | Array, Hash Table, Sorting, Counting Sort |
| `1486` | [Find the Distance Value Between Two Arrays](https://leetcode.com/problems/find-the-distance-value-between-two-arrays/) | 🟢 Easy | `cpp` | 2026-10-08 | Array, Two Pointers, Binary Search, Sorting |
| `1501` | [Circle and Rectangle Overlapping](https://leetcode.com/problems/circle-and-rectangle-overlapping/) | 🟡 Medium | `cpp` | 2026-10-06 | Math, Geometry |
| `1510` | [Find Lucky Integer in an Array](https://leetcode.com/problems/find-lucky-integer-in-an-array/) | 🟢 Easy | `cpp` | 2026-10-04 | Array, Hash Table, Counting |
| `1560` | [Number of Students Doing Homework at a Given Time](https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time/) | 🟢 Easy | `cpp` | 2026-10-08 | Array |
| `1570` | [Final Prices With a Special Discount in a Shop](https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/) | 🟢 Easy | `cpp` | 2026-10-08 | Array, Stack, Monotonic Stack |
| `1574` | [Maximum Product of Two Elements in an Array](https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/) | 🟢 Easy | `cpp` | 2026-10-08 | Array, Sorting, Heap (Priority Queue) |
| `1580` | [Shuffle the Array](https://leetcode.com/problems/shuffle-the-array/) | 🟢 Easy | `cpp` | 2026-10-08 | Array |
| `1584` | [Average Salary Excluding the Minimum and Maximum Salary](https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/) | 🟢 Easy | `cpp` | 2026-10-09 | Array, Sorting |
| `1585` | [The kth Factor of n](https://leetcode.com/problems/the-kth-factor-of-n/) | 🟡 Medium | `cpp` | 2026-10-20 | Math, Number Theory, Prime Factorization |
| `1603` | [Running Sum of 1d Array](https://leetcode.com/problems/running-sum-of-1d-array/) | 🟢 Easy | `cpp` | 2026-10-09 | Array, Prefix Sum |
| `1635` | [Number of Good Pairs](https://leetcode.com/problems/number-of-good-pairs/) | 🟢 Easy | `cpp` | 2026-10-09 | Array, Hash Table, Math, Counting |
| `1646` | [Kth Missing Positive Number](https://leetcode.com/problems/kth-missing-positive-number/) | 🟢 Easy | `cpp` | 2026-10-01 | Array, Binary Search |
| `1656` | [Count Good Triplets](https://leetcode.com/problems/count-good-triplets/) | 🟢 Easy | `cpp` | 2026-10-09 | Array, Enumeration |
| `1677` | [Matrix Diagonal Sum](https://leetcode.com/problems/matrix-diagonal-sum/) | 🟢 Easy | `cpp` | 2026-10-09 | Array, Matrix |
| `1683` | [Maximum Number of Coins You Can Get](https://leetcode.com/problems/maximum-number-of-coins-you-can-get/) | 🟡 Medium | `cpp` | 2026-10-20 | Array, Math, Greedy, Sorting, Game Theory |
| `1693` | [Sum of All Odd Length Subarrays](https://leetcode.com/problems/sum-of-all-odd-length-subarrays/) | 🟢 Easy | `cpp` | 2026-10-20 | Array, Math, Prefix Sum |
| `1742` | [Widest Vertical Area Between Two Points Containing No Points](https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/) | 🟢 Easy | `cpp` | 2026-10-10 | Array, Sorting |
| `1791` | [Richest Customer Wealth](https://leetcode.com/problems/richest-customer-wealth/) | 🟢 Easy | `cpp` | 2026-10-09 | Array, Matrix |
| `1806` | [Count of Matches in Tournament](https://leetcode.com/problems/count-of-matches-in-tournament/) | 🟢 Easy | `cpp` | 2026-10-07 | Math, Simulation |
| `1833` | [Find the Highest Altitude](https://leetcode.com/problems/find-the-highest-altitude/) | 🟢 Easy | `cpp` | 2026-10-10 | Array, Prefix Sum |
| `1839` | [Decode XORed Array](https://leetcode.com/problems/decode-xored-array/) | 🟢 Easy | `cpp` | 2026-10-10 | Array, Bit Manipulation |
| `1848` | [Sum of Unique Elements](https://leetcode.com/problems/sum-of-unique-elements/) | 🟢 Easy | `cpp` | 2026-10-03 | Array, Hash Table, Counting |
| `1889` | [Check if Number is a Sum of Powers of Three](https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three/) | 🟡 Medium | `cpp` | 2026-10-20 | Math |
| `1950` | [Sign of the Product of an Array](https://leetcode.com/problems/sign-of-the-product-of-an-array/) | 🟢 Easy | `cpp` | 2026-10-10 | Array, Math |
| `1988` | [Minimize Maximum Pair Sum in Array](https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/) | 🟡 Medium | `cpp` | 2026-10-21 | Array, Two Pointers, Greedy, Sorting |
| `2102` | [Find the Middle Index in Array](https://leetcode.com/problems/find-the-middle-index-in-array/) | 🟢 Easy | `cpp` | 2026-10-02 | Array, Prefix Sum |
| `2160` | [Minimum Operations to Make a Uni-Value Grid](https://leetcode.com/problems/minimum-operations-to-make-a-uni-value-grid/) | 🟡 Medium | `cpp` | 2026-10-24 | Array, Math, Sorting, Matrix |
| `2181` | [Smallest Index With Equal Value](https://leetcode.com/problems/smallest-index-with-equal-value/) | 🟢 Easy | `cpp` | 2026-10-01 | Array |
| `2210` | [Find Target Indices After Sorting Array](https://leetcode.com/problems/find-target-indices-after-sorting-array/) | 🟢 Easy | `cpp` | 2026-10-20 | Array, Binary Search, Sorting |
| `2265` | [Partition Array According to Given Pivot](https://leetcode.com/problems/partition-array-according-to-given-pivot/) | 🟡 Medium | `cpp` | 2026-10-13 | Array, Two Pointers, Simulation |
| `2269` | [Count Elements With Strictly Smaller and Greater Elements ](https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements/) | 🟢 Easy | `cpp` | 2026-10-22 | Array, Sorting, Counting |
| `2271` | [Rearrange Array Elements by Sign](https://leetcode.com/problems/rearrange-array-elements-by-sign/) | 🟡 Medium | `cpp` | 2026-10-21 | Array, Two Pointers, Simulation |
| `2274` | [Keep Multiplying Found Values by Two](https://leetcode.com/problems/keep-multiplying-found-values-by-two/) | 🟢 Easy | `cpp` | 2026-10-06 | Array, Hash Table, Sorting, Simulation |
| `2283` | [Sort Even and Odd Indices Independently](https://leetcode.com/problems/sort-even-and-odd-indices-independently/) | 🟢 Easy | `cpp` | 2026-10-20 | Array, Sorting |
| `2324` | [Find Triangular Sum of an Array](https://leetcode.com/problems/find-triangular-sum-of-an-array/) | 🟡 Medium | `cpp` | 2026-10-23 | Array, Math, Simulation, Combinatorics, Number Theory |
| `2383` | [Add Two Integers](https://leetcode.com/problems/add-two-integers/) | 🟢 Easy | `cpp` | 2026-06-28 | Math |
| `2481` | [Strictly Palindromic Number](https://leetcode.com/problems/strictly-palindromic-number/) | 🟡 Medium | `cpp` | 2026-10-16 | Math, Two Pointers, Brainteaser |
| `2508` | [Maximum Sum of an Hourglass](https://leetcode.com/problems/maximum-sum-of-an-hourglass/) | 🟡 Medium | `cpp` | 2026-10-05 | Array, Matrix, Prefix Sum |
| `2519` | [Find The Original Array of Prefix Xor](https://leetcode.com/problems/find-the-original-array-of-prefix-xor/) | 🟡 Medium | `cpp` | 2026-09-29 | Array, Bit Manipulation |
| `2525` | [Count Number of Distinct Integers After Reverse Operations](https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/) | 🟡 Medium | `cpp` | 2026-10-21 | Array, Hash Table, Math, Counting |
| `2631` | [Sort the Students by Their Kth Score](https://leetcode.com/problems/sort-the-students-by-their-kth-score/) | 🟡 Medium | `cpp` | 2026-10-21 | Array, Sorting, Matrix |
| `2676` | [Find the Score of All Prefixes of an Array](https://leetcode.com/problems/find-the-score-of-all-prefixes-of-an-array/) | 🟡 Medium | `cpp` | 2026-10-21 | Array, Prefix Sum |
| `2844` | [Sum of Squares of Special Elements ](https://leetcode.com/problems/sum-of-squares-of-special-elements/) | 🟢 Easy | `cpp` | 2026-10-11 | Array, Enumeration |
| `3163` | [Subarrays Distinct Element Sum of Squares I](https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/) | 🟢 Easy | `cpp` | 2026-10-15 | Array, Hash Table, Binary Indexed Tree, Segment Tree |
| `3336` | [Water Bottles II](https://leetcode.com/problems/water-bottles-ii/) | 🟡 Medium | `cpp` | 2026-10-20 | Math, Simulation |
| `3428` | [Find the XOR of Numbers Which Appear Twice](https://leetcode.com/problems/find-the-xor-of-numbers-which-appear-twice/) | 🟢 Easy | `cpp` | 2026-10-15 | Array, Hash Table, Bit Manipulation |
| `3476` | [Find Minimum Operations to Make All Elements Divisible by Three](https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/) | 🟢 Easy | `cpp` | 2026-10-24 | Array, Math |
| `3859` | [Maximum Product of Two Digits](https://leetcode.com/problems/maximum-product-of-two-digits/) | 🟢 Easy | `cpp` | 2026-10-17 | Math, Sorting |
| `3869` | [Smallest Index With Digit Sum Equal to Index](https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/) | 🟢 Easy | `cpp` | 2026-09-29 | Array, Math |
| `3918` | [Check Divisibility by Digit Sum and Product](https://leetcode.com/problems/check-divisibility-by-digit-sum-and-product/) | 🟢 Easy | `cpp` | 2026-10-03 | Math |
| `3950` | [Maximum K to Sort a Permutation](https://leetcode.com/problems/maximum-k-to-sort-a-permutation/) | 🟡 Medium | `cpp` | 2026-10-23 | Array, Bit Manipulation |
| `3995` | [GCD of Odd and Even Sums](https://leetcode.com/problems/gcd-of-odd-and-even-sums/) | 🟢 Easy | `cpp` | 2026-10-02 | Math, Number Theory |
| `4058` | [Compute Alternating Sum](https://leetcode.com/problems/compute-alternating-sum/) | 🟢 Easy | `cpp` | 2026-09-27 | Array, Simulation |
| `4078` | [Maximum Alternating Sum of Squares](https://leetcode.com/problems/maximum-alternating-sum-of-squares/) | 🟡 Medium | `cpp` | 2026-10-13 | Array, Greedy, Sorting |
| `4084` | [Maximize Sum of Squares of Digits](https://leetcode.com/problems/maximize-sum-of-squares-of-digits/) | 🟡 Medium | `cpp` | 2026-10-14 | Math, Greedy |
| `4242` | [Sum of GCD of Formed Pairs](https://leetcode.com/problems/sum-of-gcd-of-formed-pairs/) | 🟡 Medium | `cpp` | 2026-10-20 | Array, Math, Two Pointers, Sorting, Simulation, Number Theory |
| `4245` | [Count Commas in Range](https://leetcode.com/problems/count-commas-in-range/) | 🟢 Easy | `cpp` | 2026-10-03 | Math |
| `4248` | [Count Commas in Range II](https://leetcode.com/problems/count-commas-in-range-ii/) | 🟡 Medium | `cpp` | 2026-10-06 | Math |
| `4252` | [First Unique Even Element](https://leetcode.com/problems/first-unique-even-element/) | 🟢 Easy | `cpp` | 2026-09-27 | Array, Hash Table, Counting |
| `4256` | [Construct Uniform Parity Array I](https://leetcode.com/problems/construct-uniform-parity-array-i/) | 🟢 Easy | `cpp` | 2026-10-03 | Array, Math |
| `4280` | [Count Digit Appearances](https://leetcode.com/problems/count-digit-appearances/) | 🟡 Medium | `cpp` | 2026-10-20 | Array, Math |
| `4297` | [Sum of Primes Between Number and Its Reverse](https://leetcode.com/problems/sum-of-primes-between-number-and-its-reverse/) | 🟡 Medium | `cpp` | 2026-10-20 | Math, Number Theory |
| `4354` | [Unique Middle Element](https://leetcode.com/problems/unique-middle-element/) | 🟢 Easy | `cpp` | 2026-09-27 | Array, Counting |
| `4391` | [Count Subarrays With Loose Bounds](https://leetcode.com/problems/count-subarrays-with-loose-bounds/) | 🟡 Medium | `cpp` | 2026-10-24 | — |
| `4398` | [Transform Array Using Pair Operations](https://leetcode.com/problems/transform-array-using-pair-operations/) | 🟡 Medium | `cpp` | 2026-09-27 | Array, Brainteaser |
| `4430` | [Minimum Deletions to Make Array Sharp](https://leetcode.com/problems/minimum-deletions-to-make-array-sharp/) | 🟢 Easy | `cpp` | 2026-10-18 | — |
| `4436` | [Difference Between Peaks and Valleys](https://leetcode.com/problems/difference-between-peaks-and-valleys/) | 🟢 Easy | `cpp` | 2026-10-24 | — |
| `4450` | [Three Fibonacci Sum](https://leetcode.com/problems/three-fibonacci-sum/) | 🟢 Easy | `cpp` | 2026-10-13 | — |
| `4456` | [Last Visited Cell in a Directional Grid](https://leetcode.com/problems/last-visited-cell-in-a-directional-grid/) | 🟡 Medium | `cpp` | 2026-10-18 | — |
<!-- LEETCODE_STATS_END -->

---

<div align="center">

*Auto-synced daily by GitHub Actions · Built by [Rakshit Mishra](https://github.com/Rakshit0229)*

</div>

<img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&customColorList=2,3,12,20,24&height=100&section=footer&animation=fadeIn" width="100%"/>
