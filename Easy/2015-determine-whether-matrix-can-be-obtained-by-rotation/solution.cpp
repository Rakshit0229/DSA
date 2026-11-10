// ╔══════════════════════════════════════════════╗
//   Problem   : Determine Whether Matrix Can Be Obtained By Rotation
//   Difficulty: Easy
//   Tags      : Array, Matrix
//   Language  : cpp
//   Solved on : 2026-11-09
//   URL       : https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<vector<int>> rotate(vector<vector<int>>& matrix){
        int n=matrix.size();
        vector<vector<int>>matrix1;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
        return matrix1=matrix;

    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat==target){
            return true;
        }
        int i=3;
        while(i>0){
            if(rotate(mat)==target){
                return true;
            }
            else{
                i--;
            }    
        }    
    return false;    
    }
};