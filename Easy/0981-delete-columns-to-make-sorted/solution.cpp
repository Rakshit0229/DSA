// ╔══════════════════════════════════════════════╗
//   Problem   : Delete Columns to Make Sorted
//   Difficulty: Easy
//   Tags      : Array, String, Longest Increasing Subsequence
//   Language  : cpp
//   Solved on : 2026-10-03
//   URL       : https://leetcode.com/problems/delete-columns-to-make-sorted/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count=0;
        for(int j=0; j<strs[0].size(); j++){
            for(int i=0; i<strs.size()-1; i++){
                if(strs[i][j]>strs[i+1][j]){
                    count++;
                    break;
                }
            }
        }
        return count;

    }
};