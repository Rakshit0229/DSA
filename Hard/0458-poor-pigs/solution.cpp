// ╔══════════════════════════════════════════════╗
//   Problem   : Poor Pigs
//   Difficulty: Hard
//   Tags      : Math, Dynamic Programming, Combinatorics
//   Language  : cpp
//   Solved on : 2026-11-13
//   URL       : https://leetcode.com/problems/poor-pigs/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int states=minutesToTest/minutesToDie + 1;
        int pigs=0;
        long long prod=1;
        while(prod<buckets){
            prod *=states;
            pigs++;
        }
    return pigs;    
    }
};