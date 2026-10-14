// ╔══════════════════════════════════════════════╗
//   Problem   : Find the Duplicate Number
//   Difficulty: Medium
//   Tags      : Array, Two Pointers, Binary Search, Bit Manipulation, Pigeonhole Principle, Floyd's Cycle Finding Algorithm
//   Language  : cpp
//   Solved on : 2026-10-14
//   URL       : https://leetcode.com/problems/find-the-duplicate-number/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i++){
                if(nums[i]==nums[i-1]){
                    return nums[i];
                }       
        }
    return -1; 
    }
};