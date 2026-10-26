// ╔══════════════════════════════════════════════╗
//   Problem   : Remove Element
//   Difficulty: Easy
//   Tags      : Array, Two Pointers
//   Language  : cpp
//   Solved on : 2026-10-26
//   URL       : https://leetcode.com/problems/remove-element/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=val){
                nums[k]=nums[i];
                k++;
            }
        }
    return k;  
    }
};