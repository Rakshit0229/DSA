// ╔══════════════════════════════════════════════╗
//   Problem   : Circle and Rectangle Overlapping
//   Difficulty: Medium
//   Tags      : Math, Geometry
//   Language  : cpp
//   Solved on : 2026-10-06
//   URL       : https://leetcode.com/problems/circle-and-rectangle-overlapping/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int x = max(x1, min(xCenter, x2)) - xCenter;
        int y = max(y1, min(yCenter, y2)) - yCenter;
        return x * x + y * y <= radius * radius;
    }
};