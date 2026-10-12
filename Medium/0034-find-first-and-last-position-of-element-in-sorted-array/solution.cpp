// ╔══════════════════════════════════════════════╗
//   Problem   : Find First and Last Position of Element in Sorted Array
//   Difficulty: Medium
//   Tags      : Array, Binary Search
//   Language  : cpp
//   Solved on : 2026-10-11
//   URL       : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> arr;
        int start=0;
        int count=0;
        int first = -1, last = -1;
        int end= nums.size()-1;
        while(start<=end){
            int mid= start + (end-start)/2;
            if(nums[mid]==target){
                first=mid;
                end=mid-1;
                
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        start=0;
        end= nums.size()-1;
        while(start<=end){
            int mid= start + (end-start)/2;
            if(nums[mid]==target){
                last=mid;
                start=mid+1;
                
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return {first,last};
    }
};