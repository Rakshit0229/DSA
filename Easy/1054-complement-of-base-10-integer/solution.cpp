// ╔══════════════════════════════════════════════╗
//   Problem   : Complement of Base 10 Integer
//   Difficulty: Easy
//   Tags      : Bit Manipulation
//   Language  : cpp
//   Solved on : 2026-09-22
//   URL       : https://leetcode.com/problems/complement-of-base-10-integer/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int bitwiseComplement(int n) {
        int com =0;
        int bit;
        int i=0;
        if (n==0){
            return 1;
        }
        while(n!=0){
            bit=n&1;
            bit=bit^1;
            com=bit*pow(2,i) + com;
            n=n>>1;
            i++;
        }
       return com; 
    }
};