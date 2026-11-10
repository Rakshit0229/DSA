// ╔══════════════════════════════════════════════╗
//   Problem   : Count the Digits That Divide a Number
//   Difficulty: Easy
//   Tags      : Math
//   Language  : cpp
//   Solved on : 2026-11-09
//   URL       : https://leetcode.com/problems/count-the-digits-that-divide-a-number/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int v=num;
        while(v>0){
            int digit=v%10;
            if(num%digit==0){
                count++;
            }
            v=v/10;
        }
    return count;   
    }
};