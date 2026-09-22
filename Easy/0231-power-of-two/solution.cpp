// ╔══════════════════════════════════════════════╗
//   Problem   : Power of Two
//   Difficulty: Easy
//   Tags      : Math, Bit Manipulation, Recursion
//   Language  : cpp
//   Solved on : 2026-09-20
//   URL       : https://leetcode.com/problems/power-of-two/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool isPowerOfTwo(int n){
        if(n<=0) {return false;}
        while(n>1){
            while(n%2!=0){
                return false;
            }
            n=n/2;
        }
        return true;
    }
};