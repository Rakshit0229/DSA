// ╔══════════════════════════════════════════════╗
//   Problem   : Count Distinct Numbers on Board
//   Difficulty: Easy
//   Tags      : Array, Hash Table, Math, Simulation
//   Language  : cpp
//   Solved on : 2026-10-31
//   URL       : https://leetcode.com/problems/count-distinct-numbers-on-board/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int distinctIntegers(int n) {
        if(n==1){
            return 1;
        }
        else{
            return n-1;
        }
        
    }
};