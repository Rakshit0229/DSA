// ╔══════════════════════════════════════════════╗
//   Problem   : Sum of GCD of Formed Pairs
//   Difficulty: Medium
//   Tags      : Array, Math, Two Pointers, Sorting, Simulation, Number Theory
//   Language  : cpp
//   Solved on : 2026-10-20
//   URL       : https://leetcode.com/problems/sum-of-gcd-of-formed-pairs/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> prefixGcd;
        int maximum=0;
        for(int i=0; i<nums.size(); i++){
            maximum = max(maximum, nums[i]);
            prefixGcd.push_back(gcd(nums[i], maximum));
        }
        sort(prefixGcd.begin(), prefixGcd.end());
        long long sum=0;
        int s=0;
        int e=(prefixGcd.size()-1);
        while(s<e){
            sum = sum +  gcd(prefixGcd[s], prefixGcd[e]);
            s++;
            e--;
        }
    return sum;    
    }
};