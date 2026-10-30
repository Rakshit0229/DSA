// ╔══════════════════════════════════════════════╗
//   Problem   : Valid Elements in an Array
//   Difficulty: Easy
//   Tags      : Array
//   Language  : cpp
//   Solved on : 2026-10-29
//   URL       : https://leetcode.com/problems/valid-elements-in-an-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        for(int i=0; i<n; i++){
            bool  left=true;
            bool right = true;
            for(int j=0; j<i; j++){
                if(nums[j]>=nums[i]){
                    left = false;
                    break;
                }
            }
            for(int j=i+1; j<nums.size(); j++){
                if(nums[j]>=nums[i]){
                    right = false;
                    break;
                }
            }
            if(left || right)
                ans.push_back(nums[i]);
        }
    return ans;  
    }
};