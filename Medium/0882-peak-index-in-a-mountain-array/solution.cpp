// ╔══════════════════════════════════════════════╗
//   Problem   : Peak Index in a Mountain Array
//   Difficulty: Medium
//   Tags      : Array, Binary Search, Ternary Search
//   Language  : cpp
//   Solved on : 2026-10-05
//   URL       : https://leetcode.com/problems/peak-index-in-a-mountain-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i=0;
        int n=arr.size();
        int max=0;
        int index=0;
        while(i<n){
            if(arr[i]>max){
                max=arr[i];
                index=i;

            }
            i++;
        }
return index;
      
    }
};