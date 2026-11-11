// ╔══════════════════════════════════════════════╗
//   Problem   : Sort Integers by The Power Value
//   Difficulty: Medium
//   Tags      : Dynamic Programming, Memoization, Sorting
//   Language  : cpp
//   Solved on : 2026-11-11
//   URL       : https://leetcode.com/problems/sort-integers-by-the-power-value/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int reduce(int n){
        int ans=0;
        while(n>1){
            if(n%2==0){
                n=n/2;
            }
            else{
                n=3*n+1;
            }
            ans++;
        }
        return ans;
    }
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>> arr;
        for(int i=lo; i<=hi; i++){
            arr.push_back({reduce(i), i});
        }
        sort(arr.begin(), arr.end());
        return arr[k-1].second;
        
    }
};