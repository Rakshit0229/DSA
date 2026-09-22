// ╔══════════════════════════════════════════════╗
//   Problem   : Number of 1 Bits
//   Difficulty: Easy
//   Tags      : Divide and Conquer, Bit Manipulation
//   Language  : cpp
//   Solved on : 2026-09-19
//   URL       : https://leetcode.com/problems/number-of-1-bits/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int hammingWeight(int n) {
    int count=0;
    while(n!=0){
        if(n&1) {
            count++;
        }
        n=n>>1;
    }
     return count;
}        
};