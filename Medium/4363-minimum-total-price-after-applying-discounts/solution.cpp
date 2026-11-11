// ╔══════════════════════════════════════════════╗
//   Problem   : Minimum Total Price After Applying Discounts
//   Difficulty: Medium
//   Tags      : Array, Two Pointers, Greedy, Sorting
//   Language  : cpp
//   Solved on : 2026-11-11
//   URL       : https://leetcode.com/problems/minimum-total-price-after-applying-discounts/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(), prices.end());
        sort(discounts.begin(), discounts.end());
        double sum=0;
        int k = min(prices.size(), discounts.size());
        int m=(discounts.size()-1);
        int n=(prices.size()-1);
        for(int i=0; i<k; i++){
            sum += prices[n-i]*(100-discounts[m-i])/100.0;
        }
        for(int i=0; i<prices.size() -k; i++){
            sum=sum+prices[i];
        }
    return sum;    
    }
};