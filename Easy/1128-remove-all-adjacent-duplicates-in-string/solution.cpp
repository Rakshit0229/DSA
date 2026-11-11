// ╔══════════════════════════════════════════════╗
//   Problem   : Remove All Adjacent Duplicates In String
//   Difficulty: Easy
//   Tags      : String, Stack
//   Language  : cpp
//   Solved on : 2026-11-11
//   URL       : https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        for(char ch:s){
            if(!ans.empty() && ans.back()==ch){
                ans.pop_back();
            }
            else{
                ans.push_back(ch);
            }
        }
    return ans;    
    }
};