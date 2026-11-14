// ╔══════════════════════════════════════════════╗
//   Problem   : Number of Unequal Triplets in Array
//   Difficulty: Easy
//   Tags      : Array, Hash Table, Sorting
//   Language  : cpp
//   Solved on : 2026-11-14
//   URL       : https://leetcode.com/problems/number-of-unequal-triplets-in-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int n=nums.size(); 
        int count=0; 
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n;j++){
                for(int k=j+1;k<n; k++){
                    if(nums[i] !=nums[j] && nums[i] !=nums[k] && nums[j] !=nums[k]){
                        count++;
                    }
                }
            }
        }
    return count;    
    }
};