// ╔══════════════════════════════════════════════╗
//   Problem   : Minimum Moves to Equal Array Elements III
//   Difficulty: Easy
//   Tags      : Array, Math
//   Language  : cpp
//   Solved on : 2026-11-03
//   URL       : https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx=*max_element(nums.begin(),nums.end());
        int mv=0;
        for(int x: nums){
            mv=mv+abs(mx-x);
        }
    return mv;   
    }
};