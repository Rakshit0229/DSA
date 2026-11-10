// ╔══════════════════════════════════════════════╗
//   Problem   : Percentage of Letter in String
//   Difficulty: Easy
//   Tags      : String
//   Language  : cpp
//   Solved on : 2026-11-09
//   URL       : https://leetcode.com/problems/percentage-of-letter-in-string/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count=0;
        for(char c: s){
            if(c==letter){
                count++;
            }
        }
    return (count*100/s.size());    
    }
};