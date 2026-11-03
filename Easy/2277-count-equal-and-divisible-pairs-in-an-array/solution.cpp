// ╔══════════════════════════════════════════════╗
//   Problem   : Count Equal and Divisible Pairs in an Array
//   Difficulty: Easy
//   Tags      : Array
//   Language  : cpp
//   Solved on : 2026-11-03
//   URL       : https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int count=0;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]==nums[j] && (i*j)%k==0){
                    count++;
                }
            }
        }
    return count;   
    }
};