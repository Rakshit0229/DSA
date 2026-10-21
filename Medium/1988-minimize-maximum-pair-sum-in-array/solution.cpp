// ╔══════════════════════════════════════════════╗
//   Problem   : Minimize Maximum Pair Sum in Array
//   Difficulty: Medium
//   Tags      : Array, Two Pointers, Greedy, Sorting
//   Language  : cpp
//   Solved on : 2026-10-21
//   URL       : https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> sum;
        int n=(nums.size()-1);
        for(int i=0; i<nums.size()/2; i++){
            sum.push_back(nums[i]+nums[n]);
            n--;
        }
    sort(sum.begin(), sum.end());
    return sum.back(); 
        
    }
};