// ╔══════════════════════════════════════════════╗
//   Problem   : Maximum Substrings With Distinct Start
//   Difficulty: Medium
//   Tags      : Hash Table, String
//   Language  : cpp
//   Solved on : 2026-11-12
//   URL       : https://leetcode.com/problems/maximum-substrings-with-distinct-start/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int maxDistinct(string s) {
        bool seen[26]={};
        int ans=0;
        for(char ch:s){
            if(!seen[ch-'a']){
                seen[ch-'a']=true;
                ans++;
            }
        }
    return ans;    
    }
};