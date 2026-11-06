// ╔══════════════════════════════════════════════╗
//   Problem   : Reverse String
//   Difficulty: Easy
//   Tags      : Two Pointers, String
//   Language  : cpp
//   Solved on : 2026-11-06
//   URL       : https://leetcode.com/problems/reverse-string/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        for(int i=0; i<n/2; i++){
                swap(s[i], s[n-1-i]);
        }
        
    }
};