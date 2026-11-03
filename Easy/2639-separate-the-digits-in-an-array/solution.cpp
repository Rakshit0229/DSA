// ╔══════════════════════════════════════════════╗
//   Problem   : Separate the Digits in an Array
//   Difficulty: Easy
//   Tags      : Array, Simulation
//   Language  : cpp
//   Solved on : 2026-11-03
//   URL       : https://leetcode.com/problems/separate-the-digits-in-an-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size(); i++){
            vector<int>temp;
            int n=nums[i];
            while(n>0){
                int digit=n%10;
                temp.push_back(digit);
                n=n/10;
            }
            for(int i=(temp.size()-1); i>=0; i--){
                ans.push_back(temp[i]);
            }
        }
    return ans;    
    }
};