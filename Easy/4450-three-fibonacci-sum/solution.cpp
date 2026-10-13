// ╔══════════════════════════════════════════════╗
//   Problem   : Three Fibonacci Sum
//   Difficulty: Easy
//   Tags      : N/A
//   Language  : cpp
//   Solved on : 2026-10-13
//   URL       : https://leetcode.com/problems/three-fibonacci-sum/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool threeFibonacciSum(int n) {
        int a=0;
        int b=1;
        int c=1;
        if(n<2){
            return false;
        }
        while(a+b+c<n){
            int sum=b+c;
            a=b;
            b=c;
            c=sum;
        }
        if(a+b+c==n){
            return true;
        }
    return false;  
    }
};