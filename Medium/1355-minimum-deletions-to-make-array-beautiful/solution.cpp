// ╔══════════════════════════════════════════════╗
//   Problem   : Minimum Deletions to Make Array Beautiful
//   Difficulty: Medium
//   Tags      : Array, Stack, Greedy
//   Language  : cpp
//   Solved on : 2026-10-18
//   URL       : https://leetcode.com/problems/minimum-deletions-to-make-array-beautiful/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        int i=0;
        while(i<n-1){
            if(nums[i]==nums[i+1]){
                count++;
                i++;
            }
            else{
                i +=2;
            }
        }
        if((n-count)%2 !=0){
            count++;
        }
    return count;   
    }
};