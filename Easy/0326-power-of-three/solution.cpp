// ╔══════════════════════════════════════════════╗
//   Problem   : Power of Three
//   Difficulty: Easy
//   Tags      : Math, Recursion
//   Language  : cpp
//   Solved on : 2026-09-20
//   URL       : https://leetcode.com/problems/power-of-three/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0){return false;}
        while(n>1){
            while(n%3!=0){
                return false;
            }
            n=n/3;
        }
        return true;
    }
};