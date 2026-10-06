// ╔══════════════════════════════════════════════╗
//   Problem   : Keep Multiplying Found Values by Two
//   Difficulty: Easy
//   Tags      : Array, Hash Table, Sorting, Simulation
//   Language  : cpp
//   Solved on : 2026-10-06
//   URL       : https://leetcode.com/problems/keep-multiplying-found-values-by-two/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n=nums.size();
        for(int i=0;  i<n; i++){
            if(nums[i]==original){
                original= 2*original;
                i=-1;
            }
        }
        return original;       
    }
};