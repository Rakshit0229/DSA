// ╔══════════════════════════════════════════════╗
//   Problem   : Minimum Score by Changing Two Elements
//   Difficulty: Medium
//   Tags      : Array, Greedy, Sorting
//   Language  : cpp
//   Solved on : 2026-11-19
//   URL       : https://leetcode.com/problems/minimum-score-by-changing-two-elements/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return min({nums[n-3]-nums[0], nums[n-2]-nums[1], nums[n-1]-nums[2]});       
    }
};