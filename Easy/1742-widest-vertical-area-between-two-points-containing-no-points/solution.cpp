// ╔══════════════════════════════════════════════╗
//   Problem   : Widest Vertical Area Between Two Points Containing No Points
//   Difficulty: Easy
//   Tags      : Array, Sorting
//   Language  : cpp
//   Solved on : 2026-10-10
//   URL       : https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int maxi=0;
        for(int i=1; i<points.size(); i++){
            int diff= points[i][0]- points[i-1][0];

            maxi=max(maxi,diff);
        }
    return maxi; 
    }
};