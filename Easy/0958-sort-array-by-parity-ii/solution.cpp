// ╔══════════════════════════════════════════════╗
//   Problem   : Sort Array By Parity II
//   Difficulty: Easy
//   Tags      : Array, Two Pointers, Sorting
//   Language  : cpp
//   Solved on : 2026-10-07
//   URL       : https://leetcode.com/problems/sort-array-by-parity-ii/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> arr(nums.size());
        int even=0;
        int odd=1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0){
                arr[even]=nums[i];
                even +=2;
            }
            else{
                arr[odd]=nums[i];
                odd +=2;
            }
        } 
        return arr;       
    }
};