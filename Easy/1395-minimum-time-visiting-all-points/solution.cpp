// ╔══════════════════════════════════════════════╗
//   Problem   : Minimum Time Visiting All Points
//   Difficulty: Easy
//   Tags      : Array, Math, Geometry
//   Language  : cpp
//   Solved on : 2026-10-16
//   URL       : https://leetcode.com/problems/minimum-time-visiting-all-points/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int res=0;
        for(int i=1; i<points.size(); i++){
            int x1= points[i-1][0];
            int y1=points[i-1][1];

            int x2= points[i][0];
            int y2=points[i][1];    
        res = res+ max(abs(x2-x1), abs(y2-y1));
    }
    return res;  
    }
};