// ╔══════════════════════════════════════════════╗
//   Problem   : Minimum Moves to Equal Array Elements II
//   Difficulty: Medium
//   Tags      : Array, Math, Sorting
//   Language  : cpp
//   Solved on : 2026-10-24
//   URL       : https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        long long ans=0;
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int median = nums[n/2];
        
        for(int i=0; i<nums.size(); i++){
            ans = ans + abs(nums[i]-median);
        }
    return ans;      
    }
};