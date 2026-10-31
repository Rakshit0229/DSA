// ╔══════════════════════════════════════════════╗
//   Problem   : Find Greatest Common Divisor of Array
//   Difficulty: Easy
//   Tags      : Array, Math, Number Theory, Euclidean Algorithm, Greatest Common Divisor
//   Language  : cpp
//   Solved on : 2026-10-31
//   URL       : https://leetcode.com/problems/find-greatest-common-divisor-of-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return gcd(nums[0],nums[nums.size()-1]);
        
    }
};