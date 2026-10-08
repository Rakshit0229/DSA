// ╔══════════════════════════════════════════════╗
//   Problem   : Find Numbers with Even Number of Digits
//   Difficulty: Easy
//   Tags      : Array, Math
//   Language  : cpp
//   Solved on : 2026-10-08
//   URL       : https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0; i<nums.size(); i++){
            int digits =  to_string(nums[i]).length();     
            if(digits%2==0){
                count++;
            }
        }      
return count;
    }
};