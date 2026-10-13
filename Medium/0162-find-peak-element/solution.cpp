// ╔══════════════════════════════════════════════╗
//   Problem   : Find Peak Element
//   Difficulty: Medium
//   Tags      : Array, Binary Search
//   Language  : cpp
//   Solved on : 2026-10-13
//   URL       : https://leetcode.com/problems/find-peak-element/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;  
        while(start<end){
            int mid= start+(end-start)/2;
            if(nums[mid]<nums[mid+1]){
                start=mid+1;
            }
            else{
                end=mid;
            }
        }
    return start; 
    }
};