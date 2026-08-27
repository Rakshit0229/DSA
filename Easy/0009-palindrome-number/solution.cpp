// ╔══════════════════════════════════════════════╗
//   Problem   : Palindrome Number
//   Difficulty: Easy
//   Tags      : Math
//   Language  : cpp
//   Solved on : 2026-05-09
//   URL       : https://leetcode.com/problems/palindrome-number/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        long long reverse = 0;
        if(x < 0) {
            return false;
        }
        while(x > 0) {
            int digit = x % 10;
            reverse = reverse * 10 + digit;
            x = x / 10;
        }
        if(original == reverse) {
            return true;
        }
        else {
            return false;
        }
    }
};