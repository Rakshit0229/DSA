// ╔══════════════════════════════════════════════╗
//   Problem   : Split the Array
//   Difficulty: Easy
//   Tags      : Array, Hash Table, Counting
//   Language  : cpp
//   Solved on : 2026-10-29
//   URL       : https://leetcode.com/problems/split-the-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count =1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]){
                count++;
                if(count>2){
                    return false;
                }
            }
                else{
                    count=1;
                }
            }
    return true;    
    }
};