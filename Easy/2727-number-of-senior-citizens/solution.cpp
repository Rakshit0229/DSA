// ╔══════════════════════════════════════════════╗
//   Problem   : Number of Senior Citizens
//   Difficulty: Easy
//   Tags      : Array, String
//   Language  : cpp
//   Solved on : 2026-11-09
//   URL       : https://leetcode.com/problems/number-of-senior-citizens/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(string s:details){
            int n=(s[11]-'0')*10 + s[12]-'0';
            if(n>60){
                count++;
            }    
        }
        return count;
    }
};