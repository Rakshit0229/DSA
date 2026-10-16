// ╔══════════════════════════════════════════════╗
//   Problem   : Single Number III
//   Difficulty: Medium
//   Tags      : Array, Bit Manipulation
//   Language  : cpp
//   Solved on : 2026-10-15
//   URL       : https://leetcode.com/problems/single-number-iii/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for(int num: nums){
            mp[num]++;
        }
        for(int num: nums){
            if(mp[num]==1){
                ans.push_back(num);            }
        }
    return ans;  
    }
};