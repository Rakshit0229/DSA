// ╔══════════════════════════════════════════════╗
//   Problem   : Subsets
//   Difficulty: Medium
//   Tags      : Array, Backtracking, Bit Manipulation
//   Language  : cpp
//   Solved on : 2026-10-15
//   URL       : https://leetcode.com/problems/subsets/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans= {{}};
        for(int num: nums){
            int n=ans.size();
            for(int i=0; i<n; i++){
                vector<int> temp = ans[i];
                temp.push_back(num);
                ans.push_back(temp);
            }
        }
    return ans;   
    }
};