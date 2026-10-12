// ╔══════════════════════════════════════════════╗
//   Problem   : Kth Largest Element in an Array
//   Difficulty: Medium
//   Tags      : Array, Divide and Conquer, Sorting, Heap (Priority Queue), Quickselect
//   Language  : cpp
//   Solved on : 2026-10-12
//   URL       : https://leetcode.com/problems/kth-largest-element-in-an-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int ans=n-k;
        ans= nums[ans];
        return ans;    
    }
};