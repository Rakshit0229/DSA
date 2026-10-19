// ╔══════════════════════════════════════════════╗
//   Problem   : Sum of Two Integers
//   Difficulty: Medium
//   Tags      : Math, Bit Manipulation
//   Language  : cpp
//   Solved on : 2026-10-18
//   URL       : https://leetcode.com/problems/sum-of-two-integers/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int getSum(int a, int b) {
        int sum=0;
        while(b!=0){
        unsigned carry= unsigned(a&b);
        a= a^b;
        b = carry<<1;
        }
    return a;    
    }
};