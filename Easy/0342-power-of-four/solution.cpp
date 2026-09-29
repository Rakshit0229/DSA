// ╔══════════════════════════════════════════════╗
//   Problem   : Power of Four
//   Difficulty: Easy
//   Tags      : Math, Bit Manipulation, Recursion
//   Language  : cpp
//   Solved on : 2026-09-20
//   URL       : https://leetcode.com/problems/power-of-four/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0){
            return false;
        }
        while(n>1){
            while(n%4!=0){
                return false;
            }
            n=n/4;
        }
        return true;
        
    }
};