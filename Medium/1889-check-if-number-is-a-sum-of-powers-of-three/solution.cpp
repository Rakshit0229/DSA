// ╔══════════════════════════════════════════════╗
//   Problem   : Check if Number is a Sum of Powers of Three
//   Difficulty: Medium
//   Tags      : Math
//   Language  : cpp
//   Solved on : 2026-10-20
//   URL       : https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n>0){
            if(n%3==2){
                return false;
            }
            n=n/3;
        }
        return true;
        
    }
};