// ╔══════════════════════════════════════════════╗
//   Problem   : Sum of All Odd Length Subarrays
//   Difficulty: Easy
//   Tags      : Array, Math, Prefix Sum
//   Language  : cpp
//   Solved on : 2026-10-20
//   URL       : https://leetcode.com/problems/sum-of-all-odd-length-subarrays/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
        for(int i=0; i<n; i++){
            int total = (i+1)*(n-i);
            int odd = (total+1)/2;
            ans = ans + arr[i]*odd;

        }
    return ans;  
    }
};