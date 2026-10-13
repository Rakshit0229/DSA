// ╔══════════════════════════════════════════════╗
//   Problem   : Partition Array According to Given Pivot
//   Difficulty: Medium
//   Tags      : Array, Two Pointers, Simulation
//   Language  : cpp
//   Solved on : 2026-10-13
//   URL       : https://leetcode.com/problems/partition-array-according-to-given-pivot/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<pivot){
                ans.push_back(nums[i]);
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==pivot){
                ans.push_back(nums[i]);
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>pivot){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};