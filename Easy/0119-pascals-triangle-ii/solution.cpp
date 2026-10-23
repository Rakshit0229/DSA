// ╔══════════════════════════════════════════════╗
//   Problem   : Pascal's Triangle II
//   Difficulty: Easy
//   Tags      : Array, Dynamic Programming
//   Language  : cpp
//   Solved on : 2026-10-23
//   URL       : https://leetcode.com/problems/pascals-triangle-ii/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>ans;
        for(int i=0; i<=rowIndex; i++){
            vector<int>row;
            for(int  j=0; j<=i; j++){
                if(j==0 || j==i){
                    row.push_back(1);
                }
                else{
                    row.push_back(ans[i-1][j-1] + ans[i-1][j]);
                }
            }
            ans.push_back(row);
        }
    return ans[rowIndex];       
    }
}; 