// ╔══════════════════════════════════════════════╗
//   Problem   : Count Commas in Range II
//   Difficulty: Medium
//   Tags      : Math
//   Language  : cpp
//   Solved on : 2026-10-06
//   URL       : https://leetcode.com/problems/count-commas-in-range-ii/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    long long countCommas(long long n) {
        long cur=1000;
        long res=0;
        while(cur<=n){
            res += n-cur +1;
            cur *=1000;
        }
    return res;
    }
};