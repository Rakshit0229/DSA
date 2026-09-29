// ╔══════════════════════════════════════════════╗
//   Problem   : Climbing Stairs
//   Difficulty: Easy
//   Tags      : Math, Dynamic Programming, Memoization
//   Language  : cpp
//   Solved on : 2026-09-27
//   URL       : https://leetcode.com/problems/climbing-stairs/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int climbStairs(int n) {
        if(n<4){
            return n;
        }
        int a=3;
        int b=5;
        for(int i=4; i<n; i++){
            int sum=a+b;
            a=b;
            b=sum;
        }       
      return b;  
    } 
};