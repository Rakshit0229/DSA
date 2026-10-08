// ╔══════════════════════════════════════════════╗
//   Problem   : Replace Elements with Greatest Element on Right Side
//   Difficulty: Easy
//   Tags      : Array
//   Language  : cpp
//   Solved on : 2026-10-08
//   URL       : https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int j=arr.size();
        for(int i=0; i<n-1; i++){
            int maxi= *max_element(arr.begin() + i + 1, arr.end());
            arr[i]=maxi;
        }
        arr[n-1]=-1;
    return arr; 
    }
};