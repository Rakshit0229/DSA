// ╔══════════════════════════════════════════════╗
//   Problem   : Find N Unique Integers Sum up to Zero
//   Difficulty: Easy
//   Tags      : Array, Math
//   Language  : cpp
//   Solved on : 2026-10-04
//   URL       : https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        for(int i=1; i<=(n/2); i++){
            ans.push_back(-i);
            ans.push_back(i);
        }
        if(n%2!=0){
            ans.push_back(0);
        }
        return ans;
        
    }
};