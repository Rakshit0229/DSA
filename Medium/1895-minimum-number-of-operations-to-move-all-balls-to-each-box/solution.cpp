// ╔══════════════════════════════════════════════╗
//   Problem   : Minimum Number of Operations to Move All Balls to Each Box
//   Difficulty: Medium
//   Tags      : Array, String, Prefix Sum
//   Language  : cpp
//   Solved on : 2026-11-03
//   URL       : https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int> ans(n,0);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(boxes[j]=='1'){
                    ans[i]= ans[i]+ abs(i-j);
                }
            }
        }
    return ans;    
    }
};