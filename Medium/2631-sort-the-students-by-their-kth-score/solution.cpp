// ╔══════════════════════════════════════════════╗
//   Problem   : Sort the Students by Their Kth Score
//   Difficulty: Medium
//   Tags      : Array, Sorting, Matrix
//   Language  : cpp
//   Solved on : 2026-10-21
//   URL       : https://leetcode.com/problems/sort-the-students-by-their-kth-score/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int m= score.size();
        for(int i=0; i<m; i++){
            int mx=i;
            for(int j=i+1; j<m; j++){
                if(score[j][k]> score[mx][k]){
                    mx=j;
                }
            }
            swap(score[i], score[mx]);
        }
    return score;   
    }
};