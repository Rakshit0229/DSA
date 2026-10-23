// ╔══════════════════════════════════════════════╗
//   Problem   : Maximum K to Sort a Permutation
//   Difficulty: Medium
//   Tags      : Array, Bit Manipulation
//   Language  : cpp
//   Solved on : 2026-10-23
//   URL       : https://leetcode.com/problems/maximum-k-to-sort-a-permutation/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int ans=-1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!= i){
                ans=ans & nums[i];
            }
        }
    return max(ans,0);
    }
};