// ╔══════════════════════════════════════════════╗
//   Problem   : How Many Numbers Are Smaller Than the Current Number
//   Difficulty: Easy
//   Tags      : Array, Hash Table, Sorting, Counting Sort
//   Language  : cpp
//   Solved on : 2026-10-08
//   URL       : https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> arr;
        for(int i=0; i<nums.size(); i++){
            int count=0;
            for(int j=0; j<nums.size(); j++){
                if(nums[i]>nums[j]){
                    count++;
                }
            }
        arr.push_back(count);
        }
return arr;  
    }
};