// ╔══════════════════════════════════════════════╗
//   Problem   : Count Numbers with Unique Digits
//   Difficulty: Medium
//   Tags      : Math, Dynamic Programming, Backtracking
//   Language  : cpp
//   Solved on : 2026-10-17
//   URL       : https://leetcode.com/problems/count-numbers-with-unique-digits/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0){
            return 1;
        }
        int ans =10;
        int uni=9;
        int avail = 9;
        for(int i=2; i<=n && i<=10; i++){
            uni = uni*avail;
            ans = ans + uni;
            avail--;
        }
    return ans;   
    }
};