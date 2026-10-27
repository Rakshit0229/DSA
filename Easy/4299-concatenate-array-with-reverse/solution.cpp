// ╔══════════════════════════════════════════════╗
//   Problem   : Concatenate Array With Reverse
//   Difficulty: Easy
//   Tags      : Array, Simulation
//   Language  : cpp
//   Solved on : 2026-10-27
//   URL       : https://leetcode.com/problems/concatenate-array-with-reverse/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> arr;
        for(int i=0; i<nums.size(); i++){
            arr.push_back(nums[i]);
        }
        for(int i=(nums.size()-1); i>=0; i--){
            arr.push_back(nums[i]);
        }
    return arr;
        
    }
};