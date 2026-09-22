// ╔══════════════════════════════════════════════╗
//   Problem   : Happy Number
//   Difficulty: Easy
//   Tags      : Hash Table, Math, Two Pointers, Floyd's Cycle Finding Algorithm
//   Language  : cpp
//   Solved on : 2026-09-20
//   URL       : https://leetcode.com/problems/happy-number/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
bool isHappy(int n) {
int sum = 0;
while(n != 1 && n != 4) {
    sum = 0;
    while(n > 0) {
    int digit = n % 10;
    sum = sum + digit * digit;
    n = n / 10;
    }
    n = sum;
    }
    if(n == 1) {
    return true;
    }
    return false;
    }
};