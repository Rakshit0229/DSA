// ╔══════════════════════════════════════════════╗
//   Problem   : Count Pairs Whose Sum is Less than Target
//   Difficulty: Easy
//   Tags      : Array, Two Pointers, Binary Search, Sorting
//   Language  : cpp
//   Solved on : 2026-11-09
//   URL       : https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count=0;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size();j++){
                if(nums[i]+nums[j]<target && i<j){
                    count++;
                }
            } 
        }
    return count;   
    }
};