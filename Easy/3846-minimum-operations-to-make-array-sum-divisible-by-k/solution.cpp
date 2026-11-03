// ╔══════════════════════════════════════════════╗
//   Problem   : Minimum Operations to Make Array Sum Divisible by K
//   Difficulty: Easy
//   Tags      : Array, Math
//   Language  : cpp
//   Solved on : 2026-11-02
//   URL       : https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum =0;
        for(int x:nums){
            sum =sum+x;
        }
    return sum%k;    
    }
};