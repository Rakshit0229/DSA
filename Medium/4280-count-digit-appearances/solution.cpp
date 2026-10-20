// ╔══════════════════════════════════════════════╗
//   Problem   : Count Digit Appearances
//   Difficulty: Medium
//   Tags      : Array, Math
//   Language  : cpp
//   Solved on : 2026-10-20
//   URL       : https://leetcode.com/problems/count-digit-appearances/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count=0;
        for(int i=0; i<nums.size(); i++){
            while(nums[i]>0){
                int dig = nums[i]%10;
                if(dig==digit){
                    count++;
                }
                nums[i]=nums[i]/10;
            }
        }
    return count;  
    }
};