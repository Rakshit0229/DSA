// ╔══════════════════════════════════════════════╗
//   Problem   : Mean of Array After Removing Some Elements
//   Difficulty: Easy
//   Tags      : Array, Sorting
//   Language  : cpp
//   Solved on : 2026-10-09
//   URL       : https://leetcode.com/problems/mean-of-array-after-removing-some-elements/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n= arr.size();
        double sum=0;
        sort(arr.begin(), arr.end());
        for(int i=(n/20); i<(n-(n/20)); i++){
               sum += arr[i];
        }
        double mean = sum/(n-2*(n/20));
        return mean;
        
    }
};