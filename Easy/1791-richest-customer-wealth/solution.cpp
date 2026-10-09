// ╔══════════════════════════════════════════════╗
//   Problem   : Richest Customer Wealth
//   Difficulty: Easy
//   Tags      : Array, Matrix
//   Language  : cpp
//   Solved on : 2026-10-09
//   URL       : https://leetcode.com/problems/richest-customer-wealth/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi=0;
        int n=accounts.size();
        for(int i=0; i<n; i++){
            int sum=0;
        for(int j=0; j<accounts[i].size(); j++){
            sum= sum + accounts[i][j];
        }
        maxi=max(maxi,sum);
        }
    return maxi;     
    }
};