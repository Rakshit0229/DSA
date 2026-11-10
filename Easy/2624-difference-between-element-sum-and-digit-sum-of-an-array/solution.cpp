// ╔══════════════════════════════════════════════╗
//   Problem   : Difference Between Element Sum and Digit Sum of an Array
//   Difficulty: Easy
//   Tags      : Array, Math
//   Language  : cpp
//   Solved on : 2026-11-09
//   URL       : https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int digit(int n){
        int sum1=0;
        while(n>0){
            int digit=n%10;
            sum1 +=digit;
            n=n/10;
        }
    return sum1;
    }
    int differenceOfSum(vector<int>& nums) {
        int esum=0;
        for(int i=0; i<nums.size(); i++){
            esum +=nums[i];
        }
        int dsum=0;
        for(int i=0; i<nums.size(); i++){
            dsum += digit(nums[i]);
        }
    return abs(esum-dsum);    
    }
};