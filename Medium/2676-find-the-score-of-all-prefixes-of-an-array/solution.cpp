// ╔══════════════════════════════════════════════╗
//   Problem   : Find the Score of All Prefixes of an Array
//   Difficulty: Medium
//   Tags      : Array, Prefix Sum
//   Language  : cpp
//   Solved on : 2026-10-21
//   URL       : https://leetcode.com/problems/find-the-score-of-all-prefixes-of-an-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long> arr;
        long long sum=0;
        for(int num: nums){
            int mx= max(mx, num);
            sum= sum + (long long)num + mx;
            arr.push_back(sum);
        }
        return arr;
        
    }
};