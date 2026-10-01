// ╔══════════════════════════════════════════════╗
//   Problem   : Smallest Index With Equal Value
//   Difficulty: Easy
//   Tags      : Array
//   Language  : cpp
//   Solved on : 2026-10-01
//   URL       : https://leetcode.com/problems/smallest-index-with-equal-value/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            int n=nums[i];
            if(i%10==n){
                return i;
            }
        }
    return -1; 
    }
};