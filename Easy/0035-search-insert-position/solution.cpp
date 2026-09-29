// ╔══════════════════════════════════════════════╗
//   Problem   : Search Insert Position
//   Difficulty: Easy
//   Tags      : Array, Binary Search
//   Language  : cpp
//   Solved on : 2026-09-27
//   URL       : https://leetcode.com/problems/search-insert-position/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid=start-(start-end)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                start= mid+1;
            }
            else{
                end=mid-1;
            }
        }
         return start;    
    }
};