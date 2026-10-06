// ╔══════════════════════════════════════════════╗
//   Problem   : Smallest Range I
//   Difficulty: Easy
//   Tags      : Array, Math
//   Language  : cpp
//   Solved on : 2026-10-06
//   URL       : https://leetcode.com/problems/smallest-range-i/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mini= *min_element(nums.begin(), nums.end());
        int maxi= *max_element(nums.begin(), nums.end());
        int range = maxi-mini;
        if(range<= 2*k){
            return 0;
        }
    return range-2*k;   
    }
};