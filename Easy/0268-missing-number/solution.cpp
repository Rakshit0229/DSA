// ╔══════════════════════════════════════════════╗
//   Problem   : Missing Number
//   Difficulty: Easy
//   Tags      : Array, Hash Table, Math, Binary Search, Bit Manipulation, Sorting
//   Language  : cpp
//   Solved on : 2026-10-01
//   URL       : https://leetcode.com/problems/missing-number/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != i){
                return i;
            }
        }
        return nums.size();
    }
};