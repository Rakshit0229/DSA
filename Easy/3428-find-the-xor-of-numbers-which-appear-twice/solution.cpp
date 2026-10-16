// ╔══════════════════════════════════════════════╗
//   Problem   : Find the XOR of Numbers Which Appear Twice
//   Difficulty: Easy
//   Tags      : Array, Hash Table, Bit Manipulation
//   Language  : cpp
//   Solved on : 2026-10-15
//   URL       : https://leetcode.com/problems/find-the-xor-of-numbers-which-appear-twice/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int ans=0;
        for(int i=1; i<n; i++){
            if(nums[i]==nums[i-1]){
                ans = ans^nums[i];
            }
        }
    return ans;  
    }
};