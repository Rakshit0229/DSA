// ╔══════════════════════════════════════════════╗
//   Problem   : Sum of Squares of Special Elements 
//   Difficulty: Easy
//   Tags      : Array, Enumeration
//   Language  : cpp
//   Solved on : 2026-10-11
//   URL       : https://leetcode.com/problems/sum-of-squares-of-special-elements/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=1; i<=n; i++){
            if(n%i==0){
                sum = sum + nums[i-1]*nums[i-1];
            }
        }
    return sum;
    }
};