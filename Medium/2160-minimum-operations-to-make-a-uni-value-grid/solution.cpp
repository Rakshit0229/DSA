// ╔══════════════════════════════════════════════╗
//   Problem   : Minimum Operations to Make a Uni-Value Grid
//   Difficulty: Medium
//   Tags      : Array, Math, Sorting, Matrix
//   Language  : cpp
//   Solved on : 2026-10-24
//   URL       : https://leetcode.com/problems/minimum-operations-to-make-a-uni-value-grid/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> ans;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                ans.push_back(grid[i][j]);
        }
        }
        sort(ans.begin(), ans.end());
        int md= ans[ans.size()/2];
        int count =0;
        int rem=0;
        for(int i=0; i<ans.size(); i++){
            rem = abs(ans[i]-md);     
            if(rem%x !=0){
                return -1;
            }
            count = count + rem/x;     
        }
    return count;
    }
};