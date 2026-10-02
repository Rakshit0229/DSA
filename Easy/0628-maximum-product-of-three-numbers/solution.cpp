// ╔══════════════════════════════════════════════╗
//   Problem   : Maximum Product of Three Numbers
//   Difficulty: Easy
//   Tags      : Array, Math, Sorting
//   Language  : cpp
//   Solved on : 2026-10-01
//   URL       : https://leetcode.com/problems/maximum-product-of-three-numbers/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    long long maximumProduct(vector<int>& nums) {
        sort(nums.begin(),  nums.end());
        int n=nums.size();
        return max(nums[n-1]*nums[n-2]*nums[n-3], nums[0]*nums[1]*nums[n-1]);
           
    }
};