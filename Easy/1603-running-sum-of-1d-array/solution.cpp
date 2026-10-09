// ╔══════════════════════════════════════════════╗
//   Problem   : Running Sum of 1d Array
//   Difficulty: Easy
//   Tags      : Array, Prefix Sum
//   Language  : cpp
//   Solved on : 2026-10-09
//   URL       : https://leetcode.com/problems/running-sum-of-1d-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> arr;
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum= sum+ nums[i];
            arr.push_back(sum);
        }
        return arr;
        
    }
};