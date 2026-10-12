// ╔══════════════════════════════════════════════╗
//   Problem   : Permutations
//   Difficulty: Medium
//   Tags      : Array, Backtracking
//   Language  : cpp
//   Solved on : 2026-10-10
//   URL       : https://leetcode.com/problems/permutations/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();

        sort(nums.begin(), nums.end());
        do{
        ans.push_back(nums);
        }
        while(next_permutation(nums.begin(), nums.end()));
     return ans;   
    }
};