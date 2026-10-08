// ╔══════════════════════════════════════════════╗
//   Problem   : Maximum Product of Two Elements in an Array
//   Difficulty: Easy
//   Tags      : Array, Sorting, Heap (Priority Queue)
//   Language  : cpp
//   Solved on : 2026-10-08
//   URL       : https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int f= nums[n-1];
        int s = nums[n-2];
        int prod= (f-1)*(s-1);
        return prod;      
    }
};