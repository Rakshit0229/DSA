// ╔══════════════════════════════════════════════╗
//   Problem   : Maximize Sum of Squares of Digits
//   Difficulty: Medium
//   Tags      : Math, Greedy
//   Language  : cpp
//   Solved on : 2026-10-13
//   URL       : https://leetcode.com/problems/maximize-sum-of-squares-of-digits/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum>num*9){
            return "";
        }
        string ans="";
        while(sum>=9){
            ans.push_back('9');
            sum = sum-9;
        }
        if(sum>0){
            ans.push_back('0' + sum);
        }
        while(ans.size()<num){
            ans.push_back('0');
        }
return ans;
     
    }
};