// ╔══════════════════════════════════════════════╗
//   Problem   : Minimum Cuts to Divide a Circle
//   Difficulty: Easy
//   Tags      : Math, Geometry
//   Language  : cpp
//   Solved on : 2026-10-31
//   URL       : https://leetcode.com/problems/minimum-cuts-to-divide-a-circle/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int numberOfCuts(int n) {
        if(n==1){
            return 0;
        }
        if(n%2==0){
            return n/2;
        }
    return n;   
    }
};