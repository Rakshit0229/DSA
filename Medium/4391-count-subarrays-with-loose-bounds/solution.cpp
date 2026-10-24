// ╔══════════════════════════════════════════════╗
//   Problem   : Count Subarrays With Loose Bounds
//   Difficulty: Medium
//   Tags      : N/A
//   Language  : cpp
//   Solved on : 2026-10-24
//   URL       : https://leetcode.com/problems/count-subarrays-with-loose-bounds/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans=0;
        int count=0;
        vector<int> arr=nums;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>=minK && arr[i]<=maxK){
                count++;
                ans= ans+ count;
            }
            else{
                count=0;
            }
        }
    return ans;  
    }
};