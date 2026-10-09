// ╔══════════════════════════════════════════════╗
//   Problem   : Matrix Diagonal Sum
//   Difficulty: Easy
//   Tags      : Array, Matrix
//   Language  : cpp
//   Solved on : 2026-10-09
//   URL       : https://leetcode.com/problems/matrix-diagonal-sum/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size();
        for(int i=0; i<mat.size(); i++){
           sum= sum + mat[i][i];
           sum = sum + mat[i][n-1-i];
        }
        if(n%2==1){
            sum=sum-mat[n/2][n/2];
        }
    return sum;
    }
};