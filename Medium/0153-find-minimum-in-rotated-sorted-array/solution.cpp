// ╔══════════════════════════════════════════════╗
//   Problem   : Find Minimum in Rotated Sorted Array
//   Difficulty: Medium
//   Tags      : Array, Binary Search
//   Language  : cpp
//   Solved on : 2026-10-22
//   URL       : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[0];
        
    }
};