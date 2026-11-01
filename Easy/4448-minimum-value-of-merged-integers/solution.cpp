// ╔══════════════════════════════════════════════╗
//   Problem   : Minimum Value of Merged Integers
//   Difficulty: Easy
//   Tags      : N/A
//   Language  : cpp
//   Solved on : 2026-11-01
//   URL       : https://leetcode.com/problems/minimum-value-of-merged-integers/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int ans= INT_MAX;
        for(int i=0; i<nums.size(); i=i+2){
            string merged = to_string(nums[i])+to_string(nums[i+1]);
            ans = min(ans, stoi(merged));
        }
    return ans;   
    }
};