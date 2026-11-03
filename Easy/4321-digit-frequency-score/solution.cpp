// ╔══════════════════════════════════════════════╗
//   Problem   : Digit Frequency Score
//   Difficulty: Easy
//   Tags      : Hash Table, Math
//   Language  : cpp
//   Solved on : 2026-11-02
//   URL       : https://leetcode.com/problems/digit-frequency-score/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum=0;
        while(n>0){
            sum = sum +  n%10;
            n=n/10;
        }
    return sum;   
    }
};