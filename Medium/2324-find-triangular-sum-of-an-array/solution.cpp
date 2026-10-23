// ╔══════════════════════════════════════════════╗
//   Problem   : Find Triangular Sum of an Array
//   Difficulty: Medium
//   Tags      : Array, Math, Simulation, Combinatorics, Number Theory
//   Language  : cpp
//   Solved on : 2026-10-23
//   URL       : https://leetcode.com/problems/find-triangular-sum-of-an-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
            while(n>1){
                vector<int> newNums(n-1);
                for(int i=0; i<(n-1); i++){
                    newNums[i]=(nums[i]+nums[i+1])%10;
                }
            nums=newNums;
            n=nums.size();
            }
    return nums[0];
    }
};