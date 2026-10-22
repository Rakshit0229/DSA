// ╔══════════════════════════════════════════════╗
//   Problem   : Single Element in a Sorted Array
//   Difficulty: Medium
//   Tags      : Array, Binary Search
//   Language  : cpp
//   Solved on : 2026-10-22
//   URL       : https://leetcode.com/problems/single-element-in-a-sorted-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=0;
        int e=(nums.size()-1);
        while(s<e){
            int mid= s + (e-s)/2;
            if(mid%2==1){
               mid--; 
            }
            if(nums[mid]==nums[mid+1]){
                s= mid+2;
            }
            else{
                e=mid;
            }
        }
    return nums[s]; 
    }
};