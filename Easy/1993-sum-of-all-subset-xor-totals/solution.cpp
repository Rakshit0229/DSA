// ╔══════════════════════════════════════════════╗
//   Problem   : Sum of All Subset XOR Totals
//   Difficulty: Easy
//   Tags      : Array, Math, Backtracking, Bit Manipulation, Combinatorics, Enumeration
//   Language  : cpp
//   Solved on : 2026-11-02
//   URL       : https://leetcode.com/problems/sum-of-all-subset-xor-totals/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        vector<int>subset ={0};
        for(int num:nums){
            int n=subset.size();
            for(int i=0; i<n; i++){
                subset.push_back(subset[i]^num);
            }
        }
        int ans=0;
        for(int x:subset){
            ans=ans+x;
        }
    return ans;    
    }
};