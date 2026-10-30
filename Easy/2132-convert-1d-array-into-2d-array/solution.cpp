// ╔══════════════════════════════════════════════╗
//   Problem   : Convert 1D Array Into 2D Array
//   Difficulty: Easy
//   Tags      : Array, Matrix, Simulation
//   Language  : cpp
//   Solved on : 2026-10-29
//   URL       : https://leetcode.com/problems/convert-1d-array-into-2d-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;
        if(original.size()!=m*n){
            return {};
        }
        int k=0;
        for(int i=0; i<m; i++){
            vector<int> row;
            int j=0;
            while(j<n){
            row.push_back(original[k]);
            j++;
            k++;
            }
            ans.push_back(row);
        }
    return ans;   
    }
};