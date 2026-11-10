// ╔══════════════════════════════════════════════╗
//   Problem   : Minimum Equal Sum of Two Arrays After Replacing Zeros
//   Difficulty: Medium
//   Tags      : Array, Greedy
//   Language  : cpp
//   Solved on : 2026-11-10
//   URL       : https://leetcode.com/problems/minimum-equal-sum-of-two-arrays-after-replacing-zeros/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    long long sum1(vector<int>& nums1){
        long long sum1=0;
        for(int i=0; i<nums1.size(); i++){
            sum1 += nums1[i];
        }
    return sum1;
    }
    long long sum2(vector<int>& nums2){
        long long sum2=0;
        for(int i=0; i<nums2.size(); i++){
            sum2 += nums2[i];
        }
    return sum2;      
    }
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        int zero1=0;
        int zero2=0;
        for(int x:nums1)
            if(x ==0){
                zero1++;
            }
        for(int x:nums2){
            if(x==0)zero2++;
        }
        long long s1 = sum1(nums1) + zero1;
        long long s2 = sum2(nums2) + zero2;
        if(s1==s2){
            return s1;
        }
        if(s1<s2){
            if(zero1>0){
                return s2;
            }
            return -1;
        }
        if(zero2>0){
            return s1;
        }
    return -1;      
    }
};