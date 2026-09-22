// ╔══════════════════════════════════════════════╗
//   Problem   : Perfect Number
//   Difficulty: Easy
//   Tags      : Math
//   Language  : cpp
//   Solved on : 2026-09-20
//   URL       : https://leetcode.com/problems/perfect-number/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        if (num>0){
            for(int i=1; i<num; i++){
                if(num%i==0){
                    sum= sum + i;
                } 
            }
        } return sum==num;
    }
};