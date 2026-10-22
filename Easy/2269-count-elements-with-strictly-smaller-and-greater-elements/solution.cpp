// ╔══════════════════════════════════════════════╗
//   Problem   : Count Elements With Strictly Smaller and Greater Elements 
//   Difficulty: Easy
//   Tags      : Array, Sorting, Counting
//   Language  : cpp
//   Solved on : 2026-10-22
//   URL       : https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count=0;
       for(int i=1; i<(nums.size()-1); i++){
        if(nums[i]>nums[0] && nums[i]<nums.back()){
            count++;
        }
       }
    return count;    
    }
};