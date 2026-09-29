// ╔══════════════════════════════════════════════╗
//   Problem   : Number Complement
//   Difficulty: Easy
//   Tags      : Bit Manipulation
//   Language  : cpp
//   Solved on : 2026-09-21
//   URL       : https://leetcode.com/problems/number-complement/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int findComplement(int n) {
    int i=0;
    int com=0;
    while (n!=0) {
    int bit=n&1;
    bit=bit^1;
    com=com+ (bit*pow(2, i));
    n=n>>1;
    i++;
    }
        return com;
    }
};