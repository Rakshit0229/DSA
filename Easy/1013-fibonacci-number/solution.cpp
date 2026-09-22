// ╔══════════════════════════════════════════════╗
//   Problem   : Fibonacci Number
//   Difficulty: Easy
//   Tags      : Math, Dynamic Programming, Recursion, Memoization
//   Language  : cpp
//   Solved on : 2026-09-19
//   URL       : https://leetcode.com/problems/fibonacci-number/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int fib(int n) {
        int a=0;
        int b=1;
        for(int i=0; i<n;i++) {
            int sum=a+b;
            a=b;
            b=sum;
        }
        return a;
    }
};