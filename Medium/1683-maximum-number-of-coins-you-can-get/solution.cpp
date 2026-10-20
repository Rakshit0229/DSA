// ╔══════════════════════════════════════════════╗
//   Problem   : Maximum Number of Coins You Can Get
//   Difficulty: Medium
//   Tags      : Array, Math, Greedy, Sorting, Game Theory
//   Language  : cpp
//   Solved on : 2026-10-20
//   URL       : https://leetcode.com/problems/maximum-number-of-coins-you-can-get/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
       int n = piles.size(); 
        int sum=0;
        for(int i=n/3; i<n; i +=2){
            sum =  sum + piles[i];
        }
    return sum;
        
    }
};