// ╔══════════════════════════════════════════════╗
//   Problem   : Unique Middle Element
//   Difficulty: Easy
//   Tags      : Array, Counting
//   Language  : cpp
//   Solved on : 2026-09-27
//   URL       : https://leetcode.com/problems/unique-middle-element/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int start=0;
        int end = nums.size()-1;
        int mid = start + (end-start)/2;
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==nums[mid]){
                count++;
            }
        }
        return count==1;          
    }
};