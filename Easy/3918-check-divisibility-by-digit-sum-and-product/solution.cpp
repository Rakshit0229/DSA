// ╔══════════════════════════════════════════════╗
//   Problem   : Check Divisibility by Digit Sum and Product
//   Difficulty: Easy
//   Tags      : Math
//   Language  : cpp
//   Solved on : 2026-10-03
//   URL       : https://leetcode.com/problems/check-divisibility-by-digit-sum-and-product/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool checkDivisibility(int n) {
        int ds=0;
        int dp=1;
        int original=n;
        while(n>0){
            int digit=n%10;
            ds= ds + digit;
            dp=dp*digit;
            n=n/10;     
        }
        int dv=ds+dp;
        if(original%dv==0){
            return true;
        }
    return false;
    }
};