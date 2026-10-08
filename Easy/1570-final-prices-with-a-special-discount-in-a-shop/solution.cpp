// ╔══════════════════════════════════════════════╗
//   Problem   : Final Prices With a Special Discount in a Shop
//   Difficulty: Easy
//   Tags      : Array, Stack, Monotonic Stack
//   Language  : cpp
//   Solved on : 2026-10-08
//   URL       : https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> arr;
        for(int i=0; i<prices.size(); i++){
            int ans=prices[i];
            for(int j=i+1; j<prices.size(); j++){
                if(j>i && prices[j]<=prices[i]){
                    ans= prices[i]-prices[j];
                    break;
                }
            }
         arr.push_back(ans);
        }
    return arr;   
    }
};