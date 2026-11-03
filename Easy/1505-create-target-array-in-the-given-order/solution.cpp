// ╔══════════════════════════════════════════════╗
//   Problem   : Create Target Array in the Given Order
//   Difficulty: Easy
//   Tags      : Array, Simulation
//   Language  : cpp
//   Solved on : 2026-11-03
//   URL       : https://leetcode.com/problems/create-target-array-in-the-given-order/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> arr;
        for(int i=0; i<index.size(); i++){
            int ans=nums[i];
            arr.insert(arr.begin() + index[i], nums[i]);     
        } 
    return arr;      
    }
};