// ╔══════════════════════════════════════════════╗
//   Problem   : N-Repeated Element in Size 2N Array
//   Difficulty: Easy
//   Tags      : Array, Hash Table, Pigeonhole Principle
//   Language  : cpp
//   Solved on : 2026-11-03
//   URL       : https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans=0;
        for(int i=0; i<(nums.size()-1); i++){
            if(nums[i]==nums[i+1]){
                ans= nums[i];
            }
        }
    return ans;  
    }
};