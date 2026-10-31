// ╔══════════════════════════════════════════════╗
//   Problem   : Make Array Non-decreasing
//   Difficulty: Medium
//   Tags      : Array, Stack, Greedy, Monotonic Stack
//   Language  : cpp
//   Solved on : 2026-10-31
//   URL       : https://leetcode.com/problems/make-array-non-decreasing/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        int ans=0;
        int mx=0;
        for(int x:nums){
            if(x>=mx){
                ans++;
                mx=x;
            }

        }
    return ans;   
    }
};