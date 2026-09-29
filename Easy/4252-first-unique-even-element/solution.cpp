// ╔══════════════════════════════════════════════╗
//   Problem   : First Unique Even Element
//   Difficulty: Easy
//   Tags      : Array, Hash Table, Counting
//   Language  : cpp
//   Solved on : 2026-09-27
//   URL       : https://leetcode.com/problems/first-unique-even-element/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
int firstUniqueEven(vector<int>& nums) {    
    for(int i=0; i<nums.size(); i++){
        if(nums[i]%2==0){
        int count=0;
        for(int j=0; j<nums.size(); j++){
            if(nums[i]==nums[j]){
            count++;}
    }
    if(count==1){
        return nums[i];
        }
    }
                }
    return -1;
    }
};