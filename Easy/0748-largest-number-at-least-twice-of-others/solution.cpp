// ╔══════════════════════════════════════════════╗
//   Problem   : Largest Number At Least Twice of Others
//   Difficulty: Easy
//   Tags      : Array, Sorting
//   Language  : cpp
//   Solved on : 2026-10-06
//   URL       : https://leetcode.com/problems/largest-number-at-least-twice-of-others/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        int index = max_element(nums.begin(), nums.end()) - nums.begin();
        for(int i=0; i<nums.size(); i++){
            if (i != index && nums[i] * 2 > maxi){
                return -1;
            }
        }
        return index;
    }
};