// ╔══════════════════════════════════════════════╗
//   Problem   : Triangle
//   Difficulty: Medium
//   Tags      : Array, Dynamic Programming
//   Language  : cpp
//   Solved on : 2026-11-06
//   URL       : https://leetcode.com/problems/triangle/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        for (int i = triangle.size() - 2; i >= 0; i--) {
            for (int j = 0; j < triangle[i].size(); j++) {
                triangle[i][j] += min(triangle[i+1][j],triangle[i+1][j + 1]);
            }
        }
        return triangle[0][0];   
    }
};