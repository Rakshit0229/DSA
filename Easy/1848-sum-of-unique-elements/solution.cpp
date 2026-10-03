// ╔══════════════════════════════════════════════╗
//   Problem   : Sum of Unique Elements
//   Difficulty: Easy
//   Tags      : Array, Hash Table, Counting
//   Language  : cpp
//   Solved on : 2026-10-03
//   URL       : https://leetcode.com/problems/sum-of-unique-elements/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int ans=0;
        int sum=0;
        for(int i=0;i<nums.size(); i++){
            ans=nums[i];
            int count=0;
            for(int j=0; j<nums.size(); j++){
                if(nums[j]==nums[i]){
                    count++;
                }
            }
                if(count==1){
                  sum= sum+nums[i];
            }          
        }
    return sum;  
    }
};