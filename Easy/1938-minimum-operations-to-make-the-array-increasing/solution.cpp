// ╔══════════════════════════════════════════════╗
//   Problem   : Minimum Operations to Make the Array Increasing
//   Difficulty: Easy
//   Tags      : Array, Greedy
//   Language  : cpp
//   Solved on : 2026-11-03
//   URL       : https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count=0;
        for(int i=0; i<(nums.size()-1); i++){
            while(nums[i+1]<=nums[i]){
                nums[i+1]=nums[i+1]+1;
                count++;
            }
        }
    return count;    
    }
};