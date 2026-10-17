// ╔══════════════════════════════════════════════╗
//   Problem   : Maximum Product of Two Digits
//   Difficulty: Easy
//   Tags      : Math, Sorting
//   Language  : cpp
//   Solved on : 2026-10-17
//   URL       : https://leetcode.com/problems/maximum-product-of-two-digits/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int maxProduct(int n) {
        vector<int> arr;
        int ans=0;
        while(n>0){
            int digit=n%10;
            arr.push_back(digit);
            n=n/10;
        }
        int s= arr.size()-1;
        sort(arr.begin(), arr.end());
        ans = arr[s]*arr[s-1];
    return ans;   
    }
};