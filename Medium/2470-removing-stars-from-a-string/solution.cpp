// ╔══════════════════════════════════════════════╗
//   Problem   : Removing Stars From a String
//   Difficulty: Medium
//   Tags      : String, Stack, Simulation
//   Language  : cpp
//   Solved on : 2026-11-11
//   URL       : https://leetcode.com/problems/removing-stars-from-a-string/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    string removeStars(string s) {
        string ans;
        for(char ch: s){
            if(ch=='*'){
                ans.pop_back();
            }
            else{
                ans.push_back(ch);
            }
        }
    return ans;   
    }
};