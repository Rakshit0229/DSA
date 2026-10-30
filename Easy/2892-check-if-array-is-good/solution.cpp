// ╔══════════════════════════════════════════════╗
//   Problem   : Check if Array is Good
//   Difficulty: Easy
//   Tags      : Array, Hash Table, Sorting
//   Language  : cpp
//   Solved on : 2026-10-29
//   URL       : https://leetcode.com/problems/check-if-array-is-good/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool isGood(vector<int>& nums) {
        int mx= *max_element(nums.begin(), nums.end());
        sort(nums.begin(), nums.end());
        vector<int> ans;
        for(int i=1; i<mx; i++){
        ans.push_back(i);
        }
        ans.push_back(mx);
        ans.push_back(mx);  
        if(nums==ans){
            return true;
        }
    return false;    
    }
};