// ╔══════════════════════════════════════════════╗
//   Problem   : Array Partition
//   Difficulty: Easy
//   Tags      : Array, Greedy, Sorting, Counting Sort
//   Language  : cpp
//   Solved on : 2026-10-27
//   URL       : https://leetcode.com/problems/array-partition/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum=0;
        for(int i=0; i<nums.size(); i=i+2){
            sum = sum + nums[i];
        }
    return sum;   
    }
};