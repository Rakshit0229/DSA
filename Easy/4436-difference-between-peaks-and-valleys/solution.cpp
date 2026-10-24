// ╔══════════════════════════════════════════════╗
//   Problem   : Difference Between Peaks and Valleys
//   Difficulty: Easy
//   Tags      : N/A
//   Language  : cpp
//   Solved on : 2026-10-24
//   URL       : https://leetcode.com/problems/difference-between-peaks-and-valleys/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int peak= 0;
        int valley=0;
        for(int i=1; i<(nums.size()-1); i++){
        if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
            peak += nums[i];
        }
        if(nums[i]<nums[i-1] && nums[i]<nums[i+1]){
            valley += nums[i];
        }
        }
        int diff = peak - valley;
       return diff; 
    }
};