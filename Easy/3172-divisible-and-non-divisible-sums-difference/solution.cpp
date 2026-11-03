// ╔══════════════════════════════════════════════╗
//   Problem   : Divisible and Non-divisible Sums Difference
//   Difficulty: Easy
//   Tags      : Math
//   Language  : cpp
//   Solved on : 2026-11-02
//   URL       : https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1=0;
        int num2=0;
        for(int i=1; i<=n; i++){
            if(i%m!=0){
                num1=num1+i;
            }
            else{
                num2=num2+i;
            }
        }
    return num1-num2;   
    }
};