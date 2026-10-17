// ╔══════════════════════════════════════════════╗
//   Problem   : Intersection of Two Arrays II
//   Difficulty: Easy
//   Tags      : Array, Hash Table, Two Pointers, Binary Search, Sorting
//   Language  : cpp
//   Solved on : 2026-10-17
//   URL       : https://leetcode.com/problems/intersection-of-two-arrays-ii/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i=0; 
        int j=0;
        while(i<nums1.size() && j<nums2.size()){
                if(nums1[i]==nums2[j] ){
                    arr.push_back(nums1[i]);
                    i++;
                    j++;
                }
                else if(nums1[i]<nums2[j]){
                    i++;
                }
                else {
                    j++;
                }
            }
        return arr;      
    }
};