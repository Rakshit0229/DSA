// ╔══════════════════════════════════════════════╗
//   Problem   : Maximum Score From Removing Stones
//   Difficulty: Medium
//   Tags      : Math, Greedy, Heap (Priority Queue)
//   Language  : cpp
//   Solved on : 2026-11-13
//   URL       : https://leetcode.com/problems/maximum-score-from-removing-stones/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int sum= a+b+c;
        int mx= max({a,b,c});
        return min(sum/2, sum-mx);
        
    }
};