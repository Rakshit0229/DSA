// ╔══════════════════════════════════════════════╗
//   Problem   : Partition Array Such That Maximum Difference Is K
//   Difficulty: Medium
//   Tags      : Array, Greedy, Sorting
//   Language  : cpp
//   Solved on : 2026-11-03
//   URL       : https://leetcode.com/problems/partition-array-such-that-maximum-difference-is-k/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int mn=nums[0];
        int ans=1;
        for(int x:nums){
            if(x-mn>k){
                ans++;
                mn=x;

            }
        }
    return ans;    
    }
};