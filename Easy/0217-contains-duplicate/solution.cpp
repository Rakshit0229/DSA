// ╔══════════════════════════════════════════════╗
//   Problem   : Contains Duplicate
//   Difficulty: Easy
//   Tags      : Array, Hash Table, Sorting
//   Language  : cpp
//   Solved on : 2026-10-01
//   URL       : https://leetcode.com/problems/contains-duplicate/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]){
                return true;
            }   
    }
     return false; 
    }
};