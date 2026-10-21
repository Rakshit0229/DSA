// ╔══════════════════════════════════════════════╗
//   Problem   : Rearrange Array Elements by Sign
//   Difficulty: Medium
//   Tags      : Array, Two Pointers, Simulation
//   Language  : cpp
//   Solved on : 2026-10-21
//   URL       : https://leetcode.com/problems/rearrange-array-elements-by-sign/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>arr;
        vector<int> nums1;
        vector<int>nums2;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0){
                nums1.push_back(nums[i]);
            }
            else{
                nums2.push_back(nums[i]);
            }
        }
        for(int i=0; i<nums1.size(); i++){
            arr.push_back(nums1[i]);
            arr.push_back(nums2[i]);
        }
    return arr; 
    }
};