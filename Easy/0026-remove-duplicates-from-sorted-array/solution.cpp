// ╔══════════════════════════════════════════════╗
//   Problem   : Remove Duplicates from Sorted Array
//   Difficulty: Easy
//   Tags      : Array, Two Pointers
//   Language  : cpp
//   Solved on : 2026-10-26
//   URL       : https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]!=nums[i-1]){
                nums[k]=nums[i];
                k++;
            }
        }
    return k;    
    }
};