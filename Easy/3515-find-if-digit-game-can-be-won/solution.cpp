// ╔══════════════════════════════════════════════╗
//   Problem   : Find if Digit Game Can Be Won
//   Difficulty: Easy
//   Tags      : Array, Math
//   Language  : cpp
//   Solved on : 2026-10-27
//   URL       : https://leetcode.com/problems/find-if-digit-game-can-be-won/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum=0;
        int sum2=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<10){
                sum = sum+ nums[i];
            }
            else{
                sum2=sum2+nums[i];
            }
        }
        if(sum > sum2 || sum<sum2){
            return true;
        }
    return false;    
    }
};