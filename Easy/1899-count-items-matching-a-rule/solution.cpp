// ╔══════════════════════════════════════════════╗
//   Problem   : Count Items Matching a Rule
//   Difficulty: Easy
//   Tags      : Array, String
//   Language  : cpp
//   Solved on : 2026-11-03
//   URL       : https://leetcode.com/problems/count-items-matching-a-rule/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count=0;
        for(auto &item:items){
            if(ruleKey=="type" && item[0]==ruleValue){
                count++;
            }
            else if(ruleKey=="color" && item[1]==ruleValue){
                count++;
            }
            else if(ruleKey=="name" && item[2]==ruleValue){
                count++;
            }
        }
    return count;    
    }
};