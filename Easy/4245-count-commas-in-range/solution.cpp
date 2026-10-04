// ╔══════════════════════════════════════════════╗
//   Problem   : Count Commas in Range
//   Difficulty: Easy
//   Tags      : Math
//   Language  : cpp
//   Solved on : 2026-10-03
//   URL       : https://leetcode.com/problems/count-commas-in-range/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int countCommas(int n) {
        if(n<1000){
            return 0;
        }
    return n-1000+1;
    }
};