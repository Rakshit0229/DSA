// ╔══════════════════════════════════════════════╗
//   Problem   : Sum of Number and Its Reverse
//   Difficulty: Medium
//   Tags      : Math, Enumeration
//   Language  : cpp
//   Solved on : 2026-10-27
//   URL       : https://leetcode.com/problems/sum-of-number-and-its-reverse/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int revnum(int n){
        int rev=0;
        while(n>0){
            rev = rev*10 + n%10;
            n=n/10;
        }
        return rev;
    }
   
    bool sumOfNumberAndReverse(int num) {
        for(int i=0; i<=num; i++){
            if(i + revnum(i)==num){
                return true;
            }
        }
    return false;        
    }
};