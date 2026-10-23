// ╔══════════════════════════════════════════════╗
//   Problem   : Integer Break
//   Difficulty: Medium
//   Tags      : Math, Dynamic Programming
//   Language  : cpp
//   Solved on : 2026-10-23
//   URL       : https://leetcode.com/problems/integer-break/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int integerBreak(int n) {
        if(n<=3){
            return n-1;
        }
        int ans=1;
        while(n>4){
            ans= ans*3;
            n= n-3;
        }
    return ans*n;   
    }
};