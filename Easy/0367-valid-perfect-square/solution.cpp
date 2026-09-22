// ╔══════════════════════════════════════════════╗
//   Problem   : Valid Perfect Square
//   Difficulty: Easy
//   Tags      : Math, Binary Search
//   Language  : cpp
//   Solved on : 2026-09-20
//   URL       : https://leetcode.com/problems/valid-perfect-square/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool isPerfectSquare(int num) {
        for (long long i=1; i<=num; i++){
            if (i*i==num){
                return true;
            }
            if (i*i>num){
                break;
            }
        }
        return false;
    }
};