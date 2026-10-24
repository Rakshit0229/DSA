// ╔══════════════════════════════════════════════╗
//   Problem   : Minimum Moves to Equal Array Elements
//   Difficulty: Medium
//   Tags      : Array, Math
//   Language  : cpp
//   Solved on : 2026-10-24
//   URL       : https://leetcode.com/problems/minimum-moves-to-equal-array-elements/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mn= *min_element(nums.begin(), nums.end());
        int moves=0;
        for(int x: nums){
            moves = moves+ (x-mn);
        }
    return moves;   
    }
};