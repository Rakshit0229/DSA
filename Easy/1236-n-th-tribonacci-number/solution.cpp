// ╔══════════════════════════════════════════════╗
//   Problem   : N-th Tribonacci Number
//   Difficulty: Easy
//   Tags      : Math, Dynamic Programming, Memoization
//   Language  : cpp
//   Solved on : 2026-10-03
//   URL       : https://leetcode.com/problems/n-th-tribonacci-number/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int tribonacci(int n) {
        long long a=0,b=0,c=1;
        for(int i=0; i<n;i++){
            long long sum=a+b+c;
            a=b;
            b=c;
            c=sum;
        }
return b; 
    }
};