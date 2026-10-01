// ╔══════════════════════════════════════════════╗
//   Problem   : Pascal's Triangle
//   Difficulty: Easy
//   Tags      : Array, Dynamic Programming
//   Language  : cpp
//   Solved on : 2026-10-01
//   URL       : https://leetcode.com/problems/pascals-triangle/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0; i<numRows; i++){
            vector<int> row;
            for(int j=0; j<=i; j++){
                if(j==0 || j==i){
                    row.push_back(1);
                }
                else{
                    row.push_back(ans[i-1][j-1] + ans[i-1][j]);
                }
            }
            ans.push_back(row);
        }
       return ans; 
    }
};