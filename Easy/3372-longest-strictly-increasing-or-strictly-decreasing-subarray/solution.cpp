// ╔══════════════════════════════════════════════╗
//   Problem   : Longest Strictly Increasing or Strictly Decreasing Subarray
//   Difficulty: Easy
//   Tags      : Array
//   Language  : cpp
//   Solved on : 2026-11-12
//   URL       : https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans1=1;
        int ans2=1;
        int ans=1;
        for(int  i=1; i<nums.size(); i++){
            if(nums[i]>nums[i-1]){
                ans1++;
                ans2=1;
            }
            else if(nums[i]<nums[i-1]){
                ans2++;
                ans1=1;
            }
            else{
                ans1=1;
                ans2=1;
            }
        ans= max(ans, max(ans1, ans2));
        
        }
    return ans;
        
    }
};