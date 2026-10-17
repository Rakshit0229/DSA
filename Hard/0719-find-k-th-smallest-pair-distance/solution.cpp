// ╔══════════════════════════════════════════════╗
//   Problem   : Find K-th Smallest Pair Distance
//   Difficulty: Hard
//   Tags      : Array, Two Pointers, Binary Search, Sorting
//   Language  : cpp
//   Solved on : 2026-10-17
//   URL       : https://leetcode.com/problems/find-k-th-smallest-pair-distance/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int low=0;
        int high = nums[n-1]- nums[0];
        while(low<high){
            int mid= low + (high-low)/2;
            int count=0;
            int left =0;
            for(int right=0; right<n; right++){
                while(nums[right]-nums[left]>mid){
                    left++;
                }
                count = count + right - left;
            }
            if(count>=k){
                high =  mid;
            }
            else{
                low = mid+1;
            }
        }
return low;        
    }
};