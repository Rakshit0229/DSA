// ╔══════════════════════════════════════════════╗
//   Problem   : Two Sum
//   Difficulty: Easy
//   Tags      : Array, Hash Table
//   Language  : cpp
//   Solved on : 2026-05-09
//   URL       : https://leetcode.com/problems/two-sum/
// ╚══════════════════════════════════════════════╝

class Solution {
public:  
    vector<int> twoSum(vector<int>& nums, int target) {     
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }   
        return {};
    }
};