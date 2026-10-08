// ╔══════════════════════════════════════════════╗
//   Problem   : Shuffle the Array
//   Difficulty: Easy
//   Tags      : Array
//   Language  : cpp
//   Solved on : 2026-10-08
//   URL       : https://leetcode.com/problems/shuffle-the-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> arr;
        for(int i=0; i<n; i++){
            arr.push_back(nums[i]);
            arr.push_back(nums[i+n]);
        }
return arr;
        
    }
};