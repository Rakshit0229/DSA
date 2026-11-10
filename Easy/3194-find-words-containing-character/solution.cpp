// ╔══════════════════════════════════════════════╗
//   Problem   : Find Words Containing Character
//   Difficulty: Easy
//   Tags      : Array, String
//   Language  : cpp
//   Solved on : 2026-11-09
//   URL       : https://leetcode.com/problems/find-words-containing-character/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>arr;
        for(int i=0; i<words.size(); i++){
            if( count(words[i].begin(), words[i].end(), x)>0){
                arr.push_back(i);

            }
        }
    return arr;    
    }
};