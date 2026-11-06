// ╔══════════════════════════════════════════════╗
//   Problem   : Build Array from Permutation
//   Difficulty: Easy
//   Tags      : Array, Simulation
//   Language  : cpp
//   Solved on : 2026-11-06
//   URL       : https://leetcode.com/problems/build-array-from-permutation/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            ans.push_back(nums[nums[i]]);
        }
    return ans;    
    }
};