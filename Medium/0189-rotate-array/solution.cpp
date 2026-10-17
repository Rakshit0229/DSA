// ╔══════════════════════════════════════════════╗
//   Problem   : Rotate Array
//   Difficulty: Medium
//   Tags      : Array, Math, Two Pointers
//   Language  : cpp
//   Solved on : 2026-10-17
//   URL       : https://leetcode.com/problems/rotate-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            arr[(i+k)%n]=nums[i];
        }
        nums = arr;      
    }
};