// ╔══════════════════════════════════════════════╗
//   Problem   : Number of Digit One
//   Difficulty: Hard
//   Tags      : Math, Dynamic Programming, Recursion
//   Language  : cpp
//   Solved on : 2026-10-17
//   URL       : https://leetcode.com/problems/number-of-digit-one/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int countDigitOne(int n) {
        long long count=0;
        for(long long i=1; i<=n; i *=10){
            long long divider = i*10;
            count = count + (n/divider)*i + min(i, max(0LL, n%divider -i +1));       
        }
    return count;  
    }
};