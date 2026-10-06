// ╔══════════════════════════════════════════════╗
//   Problem   : Sort Array By Parity
//   Difficulty: Easy
//   Tags      : Array, Two Pointers, Sorting
//   Language  : cpp
//   Solved on : 2026-10-06
//   URL       : https://leetcode.com/problems/sort-array-by-parity/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> arr;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0){
                arr.insert(arr.begin(), nums[i]);
            }
            else{
                arr.push_back(nums[i]);
            }
        }
    return arr;   
    }
};