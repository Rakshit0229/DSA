// ╔══════════════════════════════════════════════╗
//   Problem   : Maximum Product Difference Between Two Pairs
//   Difficulty: Easy
//   Tags      : Array, Sorting, Quicksort
//   Language  : cpp
//   Solved on : 2026-11-03
//   URL       : https://leetcode.com/problems/maximum-product-difference-between-two-pairs/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        return ((nums[n-1]*nums[n-2])-(nums[0]*nums[1]));      
    }
};