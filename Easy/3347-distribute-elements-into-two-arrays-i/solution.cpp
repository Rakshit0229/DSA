// ╔══════════════════════════════════════════════╗
//   Problem   : Distribute Elements Into Two Arrays I
//   Difficulty: Easy
//   Tags      : Array, Two Pointers, Simulation
//   Language  : cpp
//   Solved on : 2026-11-09
//   URL       : https://leetcode.com/problems/distribute-elements-into-two-arrays-i/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>arr1;
        vector<int>arr2;
        vector<int>ans;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        for(int i=2; i<nums.size(); i++){
            if(arr1.back()>arr2.back()){
                arr1.push_back(nums[i]);
            }
            else{
                arr2.push_back(nums[i]);
            }   
        }
    for(int i=0; i<arr1.size(); i++){
        ans.push_back(arr1[i]);
    }
    for(int i=0; i<arr2.size(); i++){
        ans.push_back(arr2[i]);
    }
    return ans;    
    }
};