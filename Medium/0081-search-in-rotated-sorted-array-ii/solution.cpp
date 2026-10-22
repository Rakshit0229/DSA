// ╔══════════════════════════════════════════════╗
//   Problem   : Search in Rotated Sorted Array II
//   Difficulty: Medium
//   Tags      : Array, Binary Search
//   Language  : cpp
//   Solved on : 2026-10-22
//   URL       : https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                return true; 
                break;
            }
        }
    return false;   
    }
};