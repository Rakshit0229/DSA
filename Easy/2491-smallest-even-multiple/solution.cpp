// ╔══════════════════════════════════════════════╗
//   Problem   : Smallest Even Multiple
//   Difficulty: Easy
//   Tags      : Math, Number Theory
//   Language  : cpp
//   Solved on : 2026-10-31
//   URL       : https://leetcode.com/problems/smallest-even-multiple/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2!=0){
            return n*2;
        }

    return n;        
    }
};