// ╔══════════════════════════════════════════════╗
//   Problem   : Check if Array Is Sorted and Rotated
//   Difficulty: Easy
//   Tags      : Array
//   Language  : cpp
//   Solved on : 2026-11-01
//   URL       : https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool check(vector<int>& nums) {
        int n= nums.size();
        vector<int>sorted= nums;
        sort(sorted.begin(), sorted.end());
        for(int k=0; k<n; k++){
            vector<int>arr;
            for(int i=0; i<nums.size(); i++){
                arr.push_back(sorted[(i+k)%n]);            } 
        if(arr==nums){
            return true;
        }
    }   
    return false;    
    }
};