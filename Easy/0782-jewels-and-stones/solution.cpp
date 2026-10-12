// ╔══════════════════════════════════════════════╗
//   Problem   : Jewels and Stones
//   Difficulty: Easy
//   Tags      : Hash Table, String
//   Language  : cpp
//   Solved on : 2026-10-10
//   URL       : https://leetcode.com/problems/jewels-and-stones/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count =0;
        for( char stone: stones){
            for(char jewel:  jewels){
                if(stone==jewel){
                    count++;
                    break;
                }
            }
        }
    return count;  
    }
};