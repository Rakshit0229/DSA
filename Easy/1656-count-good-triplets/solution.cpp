// ╔══════════════════════════════════════════════╗
//   Problem   : Count Good Triplets
//   Difficulty: Easy
//   Tags      : Array, Enumeration
//   Language  : cpp
//   Solved on : 2026-10-09
//   URL       : https://leetcode.com/problems/count-good-triplets/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int count=0;
        for(int i=0; i<arr.size(); i++){
            for(int j=0; j<arr.size(); j++){
                for(int k=0; k<arr.size(); k++){
                    if(abs(arr[i]-arr[j])<=a && abs(arr[j]-arr[k])<=b && abs(arr[i]-arr[k])<=c && 0<=i && i<j && j<k && k<arr.size() ){
                        count++;
                    }
                }
            }
        }
    return count; 
    }
};