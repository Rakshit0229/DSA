// ╔══════════════════════════════════════════════╗
//   Problem   : Product of Array Except Self
//   Difficulty: Medium
//   Tags      : Array, Prefix Sum
//   Language  : cpp
//   Solved on : 2026-10-15
//   URL       : https://leetcode.com/problems/product-of-array-except-self/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,1);
        int prod=1;
        for(int i=0; i<nums.size(); i++){
            ans[i]=prod;
            prod=prod*nums[i];

        }
        prod=1;
        for(int i=n-1; i>=0; i--){
            ans[i]= ans[i]*prod;
            prod= prod * nums[i];
        }  
        return ans;
    }
};