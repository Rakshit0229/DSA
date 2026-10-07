// ╔══════════════════════════════════════════════╗
//   Problem   : Squares of a Sorted Array
//   Difficulty: Easy
//   Tags      : Array, Two Pointers, Sorting
//   Language  : cpp
//   Solved on : 2026-10-07
//   URL       : https://leetcode.com/problems/squares-of-a-sorted-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> arr;
        int j=0;
        for(int i=0; i<nums.size(); i++){
            j=nums[i]*nums[i];
            arr.push_back(j);        
        }
        sort(arr.begin(), arr.end());
        return arr;
        
    }
};