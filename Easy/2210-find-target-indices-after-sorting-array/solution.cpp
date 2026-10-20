// ╔══════════════════════════════════════════════╗
//   Problem   : Find Target Indices After Sorting Array
//   Difficulty: Easy
//   Tags      : Array, Binary Search, Sorting
//   Language  : cpp
//   Solved on : 2026-10-20
//   URL       : https://leetcode.com/problems/find-target-indices-after-sorting-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                ans.push_back(i);
            }
        }
    return ans;   
    }
};