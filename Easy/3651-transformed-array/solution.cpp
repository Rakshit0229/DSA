// ╔══════════════════════════════════════════════╗
//   Problem   : Transformed Array
//   Difficulty: Easy
//   Tags      : Array, Simulation
//   Language  : cpp
//   Solved on : 2026-10-27
//   URL       : https://leetcode.com/problems/transformed-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> arr;
        int n=nums.size();
        for(int i=0; i<nums.size(); i++){
            int j= (i+ nums[i]) %n;
            if(j<0){
                j=j+n;
            }

            arr.push_back(nums[j]);
        }
    return arr;    
    }
};