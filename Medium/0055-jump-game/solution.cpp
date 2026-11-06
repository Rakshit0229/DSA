// ╔══════════════════════════════════════════════╗
//   Problem   : Jump Game
//   Difficulty: Medium
//   Tags      : Array, Dynamic Programming, Greedy
//   Language  : cpp
//   Solved on : 2026-11-06
//   URL       : https://leetcode.com/problems/jump-game/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxR=0;
        for(int i=0; i<nums.size(); i++){
            if(i>maxR){
                return false;
            }
            maxR=max(maxR, i+nums[i]);
        }
    return true;
    }
};