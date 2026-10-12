// ╔══════════════════════════════════════════════╗
//   Problem   : Sign of the Product of an Array
//   Difficulty: Easy
//   Tags      : Array, Math
//   Language  : cpp
//   Solved on : 2026-10-10
//   URL       : https://leetcode.com/problems/sign-of-the-product-of-an-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int prod=1;
        for(int i=0; i<nums.size(); i++){
           if(nums[i]==0){
            return 0;
           }
           if(nums[i]<0){
            prod= - prod;
           }
        }
        if(prod>0){
            return 1;
        }
     return -1;
    }
};