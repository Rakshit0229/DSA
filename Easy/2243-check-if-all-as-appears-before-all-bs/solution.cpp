// ╔══════════════════════════════════════════════╗
//   Problem   : Check if All A's Appears Before All B's
//   Difficulty: Easy
//   Tags      : String
//   Language  : cpp
//   Solved on : 2026-11-01
//   URL       : https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool checkString(string s) {
        string t=s;
        sort(t.begin(), t.end());
    return(t==s);     
    }
};