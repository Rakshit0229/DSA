// ╔══════════════════════════════════════════════╗
//   Problem   : Reverse Integer
//   Difficulty: Medium
//   Tags      : Math
//   Language  : cpp
//   Solved on : 2026-09-22
//   URL       : https://leetcode.com/problems/reverse-integer/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int reverse(int n) {
        int ans=0;
        while(n!=0){
            int digit= n%10;
            if ( (ans>INT_MAX/10 )|| (ans<INT_MIN/10 )){
                return 0;
            }
            ans=(ans*10) + digit;
            n=n/10;
        } return ans;  
     }
};