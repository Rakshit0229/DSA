// ╔══════════════════════════════════════════════╗
//   Problem   : Find All Duplicates in an Array
//   Difficulty: Medium
//   Tags      : Array, Hash Table, Sorting
//   Language  : cpp
//   Solved on : 2026-10-15
//   URL       : https://leetcode.com/problems/find-all-duplicates-in-an-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            int index= abs(nums[i])-1;
            if(nums[index]<0){
                ans.push_back(abs(nums[i]));
            }
            else{
                nums[index]= -nums[index];
            }
        }  
    return ans;    
    }
};