// ╔══════════════════════════════════════════════╗
//   Problem   : Maximum Gap
//   Difficulty: Medium
//   Tags      : Array, Sorting, Bucket Sort, Radix Sort, Pigeonhole Principle
//   Language  : cpp
//   Solved on : 2026-11-12
//   URL       : https://leetcode.com/problems/maximum-gap/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int ans=0;
        for(int i=1; i<nums.size(); i++){
            int diff=nums[i]-nums[i-1];
            ans=max(ans, diff);
        }
    return ans;    
    }
};