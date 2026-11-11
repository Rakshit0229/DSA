// ╔══════════════════════════════════════════════╗
//   Problem   : Divide Array Into Arrays With Max Difference
//   Difficulty: Medium
//   Tags      : Array, Greedy, Sorting
//   Language  : cpp
//   Solved on : 2026-11-11
//   URL       : https://leetcode.com/problems/divide-array-into-arrays-with-max-difference/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n=nums.size()/3;
        for(int i=0; i<nums.size(); i=i+3){
            if(nums[i+2]-nums[i]>k){
                return {};
            }
            ans.push_back({nums[i], nums[i+1], nums[i+2]});
        }
    return ans;
        
    }
};