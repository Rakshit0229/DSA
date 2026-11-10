// ╔══════════════════════════════════════════════╗
//   Problem   : Type of Triangle
//   Difficulty: Easy
//   Tags      : Array, Math, Sorting, Polygons
//   Language  : cpp
//   Solved on : 2026-11-09
//   URL       : https://leetcode.com/problems/type-of-triangle/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums[0]+nums[1]<=nums[2]){
            return "none";
        }
        else if(nums[0]==nums[1] && nums[1]==nums[2]){
            return "equilateral";
        }
        else if(nums[0]==nums[1] || nums[1]==nums[2]){
            return "isosceles";
        }
            return "scalene";    
    }
};