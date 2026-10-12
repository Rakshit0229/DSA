// ╔══════════════════════════════════════════════╗
//   Problem   : Two Sum II - Input Array Is Sorted
//   Difficulty: Medium
//   Tags      : Array, Two Pointers, Binary Search
//   Language  : cpp
//   Solved on : 2026-10-11
//   URL       : https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        while(i<j){
            int sum = numbers[i]+ numbers[j];
            if(sum==target){
                return {i+1, j+1};
            }
            else if(sum<target){
                i++;
            }
            else{
                j--;
            }
        }
    return {};  
    }
};