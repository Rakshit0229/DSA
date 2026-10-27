// ╔══════════════════════════════════════════════╗
//   Problem   : Create Grid With Exactly One Path
//   Difficulty: Easy
//   Tags      : N/A
//   Language  : cpp
//   Solved on : 2026-10-27
//   URL       : https://leetcode.com/problems/create-grid-with-exactly-one-path/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> grid(m, string(n, '#'));
        for(int j=0; j<n; j++){
            grid[0][j]='.';
        } 
        for (int i = 0; i < m; i++) {
            grid[i][n - 1] = '.';
        }

        return grid;
    }
};