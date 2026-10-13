// ╔══════════════════════════════════════════════╗
//   Problem   : Maximum Alternating Sum of Squares
//   Difficulty: Medium
//   Tags      : Array, Greedy, Sorting
//   Language  : cpp
//   Solved on : 2026-10-13
//   URL       : https://leetcode.com/problems/maximum-alternating-sum-of-squares/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
      for(int i = 0; i <nums.size(); i++) {
    nums[i] = abs(nums[i]);
      }
        sort(nums.begin(), nums.end());
        int n=nums.size()/2;
        long long sum1=0;
        for(int i=n; i<nums.size(); i++){
            sum1=sum1 + nums[i]*nums[i];
        }
        long long sum2=0;
        for(int i=0; i<n; i++){
            sum2=sum2+nums[i]*nums[i];  
        }
        return sum1-sum2;    
    }
};