// ╔══════════════════════════════════════════════╗
//   Problem   : Calculate Digit Sum of a String
//   Difficulty: Easy
//   Tags      : String, Simulation
//   Language  : cpp
//   Solved on : 2026-11-16
//   URL       : https://leetcode.com/problems/calculate-digit-sum-of-a-string/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size()>k){
            string  ans="";
            for(int i=0; i<s.size(); i=i+k){
                int sum=0; 
                for(int j=i; j<s.size() && j<i+k; j++){
                    sum= sum+ s[j]-'0';
                }
                ans +=to_string(sum);
            }
            s=ans;
        }
    return s;    
    }
};