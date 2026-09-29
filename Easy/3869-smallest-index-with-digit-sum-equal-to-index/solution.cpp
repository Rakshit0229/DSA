// ╔══════════════════════════════════════════════╗
//   Problem   : Smallest Index With Digit Sum Equal to Index
//   Difficulty: Easy
//   Tags      : Array, Math
//   Language  : cpp
//   Solved on : 2026-09-29
//   URL       : https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            long long sum=0;
            int num=nums[i];
            while(num>0){
            int digit=num%10;
            sum= sum + digit;
            num= num/10;
            }
            if(sum==i){
            return i;
        }
        }
     return -1;
    }
};