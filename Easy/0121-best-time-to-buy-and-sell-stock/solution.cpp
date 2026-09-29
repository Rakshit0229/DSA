// ╔══════════════════════════════════════════════╗
//   Problem   : Best Time to Buy and Sell Stock
//   Difficulty: Easy
//   Tags      : Array, Dynamic Programming
//   Language  : cpp
//   Solved on : 2026-09-25
//   URL       : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice= prices[0];
        int maxProfit=0;
        for(int i=1; i<prices.size(); i++){
            if(prices[i]<minprice){
                minprice=prices[i];
            }
            int Profit = prices[i]-minprice;
            if(Profit>maxProfit){
                maxProfit = Profit;
            }
        }
       return maxProfit; 
    }
};