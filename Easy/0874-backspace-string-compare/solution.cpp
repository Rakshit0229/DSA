// ╔══════════════════════════════════════════════╗
//   Problem   : Backspace String Compare
//   Difficulty: Easy
//   Tags      : Two Pointers, String, Stack, Simulation
//   Language  : cpp
//   Solved on : 2026-11-11
//   URL       : https://leetcode.com/problems/backspace-string-compare/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool backspaceCompare(string s, string t) {
       string s1;
       string t1;
       for(char ch:s){
        if(ch=='#'){
            if(!s1.empty())
            s1.pop_back();
        }
        else{
            s1.push_back(ch);
        }
       }
       for(char ch:t){
        if(ch=='#'){
            if(!t1.empty())
            t1.pop_back();
        }
        else{
            t1.push_back(ch);
        }
       }
    return (s1==t1);
        
    }
};