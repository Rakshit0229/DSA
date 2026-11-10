// ╔══════════════════════════════════════════════╗
//   Problem   : Take Gifts From the Richest Pile
//   Difficulty: Easy
//   Tags      : Array, Heap (Priority Queue), Simulation
//   Language  : cpp
//   Solved on : 2026-11-09
//   URL       : https://leetcode.com/problems/take-gifts-from-the-richest-pile/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        while(k>0){
            int mx= *max_element(gifts.begin(), gifts.end());
            int i = max_element(gifts.begin(), gifts.end()) - gifts.begin();
            gifts[i]=sqrt(mx);
            k--;
        }
        long long sum=0;
        for(int i=0; i<gifts.size(); i++){
            sum =sum+gifts[i];
        }
    return sum;    
    }
};