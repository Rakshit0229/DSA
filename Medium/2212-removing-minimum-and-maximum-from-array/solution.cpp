// ╔══════════════════════════════════════════════╗
//   Problem   : Removing Minimum and Maximum From Array
//   Difficulty: Medium
//   Tags      : Array, Greedy
//   Language  : cpp
//   Solved on : 2026-11-13
//   URL       : https://leetcode.com/problems/removing-minimum-and-maximum-from-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int idmax= max_element(nums.begin(),nums.end())-nums.begin();
        int idmin= min_element(nums.begin(), nums.end())-nums.begin();
        int l=min(idmax, idmin);
        int r=max(idmin, idmax);
        int n=nums.size();
        int a=r+1;
        int b=n-l;
        int c=(l+1) + (n-r);
        return min({a,b,c});    
    }
};