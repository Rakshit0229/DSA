// ╔══════════════════════════════════════════════╗
//   Problem   : Count Number of Pairs With Absolute Difference K
//   Difficulty: Easy
//   Tags      : Array, Hash Table, Counting
//   Language  : cpp
//   Solved on : 2026-11-03
//   URL       : https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(abs(nums[i]-nums[j])==k && i<j){
                    count++;
                }
            }
        }
    return count;    
    }
};