// ╔══════════════════════════════════════════════╗
//   Problem   : Concatenation of Array
//   Difficulty: Easy
//   Tags      : Array, Simulation
//   Language  : cpp
//   Solved on : 2026-11-03
//   URL       : https://leetcode.com/problems/concatenation-of-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        ans=nums;
        for(int i=0; i<nums.size(); i++){
            ans.push_back(nums[i]);
        }
    return ans;    
    }
};