// ╔══════════════════════════════════════════════╗
//   Problem   : K-diff Pairs in an Array
//   Difficulty: Medium
//   Tags      : Array, Hash Table, Two Pointers, Binary Search, Sorting
//   Language  : cpp
//   Solved on : 2026-11-12
//   URL       : https://leetcode.com/problems/k-diff-pairs-in-an-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ans=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            if(binary_search(nums.begin()+i+1, nums.end(), nums[i]+k)){
                ans++;
            }
        }
    return ans;  
    }
};