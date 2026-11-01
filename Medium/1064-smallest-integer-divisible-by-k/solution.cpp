// ╔══════════════════════════════════════════════╗
//   Problem   : Smallest Integer Divisible by K
//   Difficulty: Medium
//   Tags      : Hash Table, Math, Pigeonhole Principle
//   Language  : cpp
//   Solved on : 2026-11-01
//   URL       : https://leetcode.com/problems/smallest-integer-divisible-by-k/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int rem=0;
        for(int count=1; count<=k; count++){
            rem=rem*10+1;
            rem=rem%k;
            if(rem==0){
                return count;
            }

        }
    return -1;   
    }
};