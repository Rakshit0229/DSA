// ╔══════════════════════════════════════════════╗
//   Problem   : Partitioning Into Minimum Number Of Deci-Binary Numbers
//   Difficulty: Medium
//   Tags      : String, Greedy
//   Language  : cpp
//   Solved on : 2026-11-11
//   URL       : https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int minPartitions(string n) {
        return *max_element(n.begin(), n.end())-'0';
        
    }
};