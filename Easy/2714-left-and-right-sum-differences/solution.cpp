// ╔══════════════════════════════════════════════╗
//   Problem   : Left and Right Sum Differences
//   Difficulty: Easy
//   Tags      : Array, Prefix Sum
//   Language  : cpp
//   Solved on : 2026-11-09
//   URL       : https://leetcode.com/problems/left-and-right-sum-differences/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int leftsum=0;
        int rightsum=0;
        int n=nums.size();
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            rightsum +=nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            rightsum -=nums[i];
            ans.push_back(abs(leftsum-rightsum));
            leftsum +=nums[i];
        }
    return ans;    
    }
};