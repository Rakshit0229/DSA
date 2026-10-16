// ╔══════════════════════════════════════════════╗
//   Problem   : Single Number II
//   Difficulty: Medium
//   Tags      : Array, Bit Manipulation
//   Language  : cpp
//   Solved on : 2026-10-15
//   URL       : https://leetcode.com/problems/single-number-ii/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans=0;
        for(int num:nums){
            mp[num]++;
        }
        for(int num:nums){
            if(mp[num]==1){
                ans=num;
            }
        }
        return ans;
    }
};