// ╔══════════════════════════════════════════════╗
//   Problem   : Move Zeroes
//   Difficulty: Easy
//   Tags      : Array, Two Pointers
//   Language  : cpp
//   Solved on : 2026-10-26
//   URL       : https://leetcode.com/problems/move-zeroes/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<n; ){
            if(nums[i]==0){
                rotate(nums.begin() + i, nums.begin() + i + 1, nums.end());
                n--;
            }
            else{
                i++;
            }
        } 
    }
};