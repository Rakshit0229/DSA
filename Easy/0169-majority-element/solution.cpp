// ╔══════════════════════════════════════════════╗
//   Problem   : Majority Element
//   Difficulty: Easy
//   Tags      : Array, Hash Table, Divide and Conquer, Sorting, Counting, Boyer–Moore Majority Vote Algorithm
//   Language  : cpp
//   Solved on : 2026-09-29
//   URL       : https://leetcode.com/problems/majority-element/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int total=0;
        for(int i=0; i<nums.size(); i++){
            if(count==0){
                total=nums[i];
            }
            if(nums[i]==total){
                count++;
            }
            else{
                count--;
            }            
            }
        return total;          
    }
};