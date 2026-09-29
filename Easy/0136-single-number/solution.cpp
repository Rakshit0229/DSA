// ╔══════════════════════════════════════════════╗
//   Problem   : Single Number
//   Difficulty: Easy
//   Tags      : Array, Bit Manipulation
//   Language  : cpp
//   Solved on : 2026-09-29
//   URL       : https://leetcode.com/problems/single-number/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int ans=0;
    for(int i=0; i<nums.size(); i++){
        ans= ans^nums[i];
    }
    return ans;

        
    }
};