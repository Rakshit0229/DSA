// ╔══════════════════════════════════════════════╗
//   Problem   : Reverse Bits
//   Difficulty: Easy
//   Tags      : Divide and Conquer, Bit Manipulation
//   Language  : cpp
//   Solved on : 2026-09-27
//   URL       : https://leetcode.com/problems/reverse-bits/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int reverseBits(int n) {
    int ans=0;

    for(int i=0; i<32; i++){
        int bit=n&1;
        ans=ans<<1;
        ans = ans| bit;
        n=n>>1;
    }
    return ans;
    }
};