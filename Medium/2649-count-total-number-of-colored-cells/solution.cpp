// ╔══════════════════════════════════════════════╗
//   Problem   : Count Total Number of Colored Cells
//   Difficulty: Medium
//   Tags      : Math
//   Language  : cpp
//   Solved on : 2026-10-31
//   URL       : https://leetcode.com/problems/count-total-number-of-colored-cells/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    long long coloredCells(int n) {
        long long ans=0;
        for(int i=1; i<=n; i++){
            ans = ans + 1 + (4*(i-1));
        }
    return ans-(n-1);    
    }
};