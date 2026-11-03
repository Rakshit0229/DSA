// ╔══════════════════════════════════════════════╗
//   Problem   : Minimum Increment to Make Array Unique
//   Difficulty: Medium
//   Tags      : Array, Greedy, Sorting, Counting
//   Language  : cpp
//   Solved on : 2026-11-03
//   URL       : https://leetcode.com/problems/minimum-increment-to-make-array-unique/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count=0;
        for(int i=1; i<nums.size(); i++){
            while(nums[i]<=nums[i-1]){
                nums[i]++;
                count++;
            }
        }
    return count;    
    }
};