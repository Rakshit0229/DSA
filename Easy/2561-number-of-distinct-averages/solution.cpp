// ╔══════════════════════════════════════════════╗
//   Problem   : Number of Distinct Averages
//   Difficulty: Easy
//   Tags      : Array, Hash Table, Two Pointers, Sorting
//   Language  : cpp
//   Solved on : 2026-11-02
//   URL       : https://leetcode.com/problems/number-of-distinct-averages/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<int> s;
        int i=0, j=nums.size()-1;
        while(i<j){
            s.insert(nums[i]+nums[j]);
            i++;
            j--;
        }
    return s.size();   
    }
};