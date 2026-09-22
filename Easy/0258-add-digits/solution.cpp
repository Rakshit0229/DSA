// ╔══════════════════════════════════════════════╗
//   Problem   : Add Digits
//   Difficulty: Easy
//   Tags      : Math, Simulation, Number Theory
//   Language  : cpp
//   Solved on : 2026-09-20
//   URL       : https://leetcode.com/problems/add-digits/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int addDigits(int n){
        while(n>=10){
        int DigitSum=0;
        while(n>0)
        {
            int Digits=n%10;
            DigitSum=DigitSum+Digits;
            n=n/10;
        }
         n = DigitSum;
        }
        return n;
    }
};