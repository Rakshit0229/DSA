// ╔══════════════════════════════════════════════╗
//   Problem   : Max Consecutive Ones
//   Difficulty: Easy
//   Tags      : Array
//   Language  : cpp
//   Solved on : 2026-10-28
//   URL       : https://leetcode.com/problems/max-consecutive-ones/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> score;
        for(int i=0; i<(nums.size());){
            int count=0;
            while(i <nums.size() &&nums[i]==1){
               i=i+1;
               count++;
            }
            score.push_back(count);
            if(i<nums.size() && nums[i]==0){
                i=i+1;
            }
        }
    int mx = *max_element(score.begin(), score.end());
    return mx;     
    }
};