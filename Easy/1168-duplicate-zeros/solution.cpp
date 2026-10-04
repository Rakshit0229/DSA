// ╔══════════════════════════════════════════════╗
//   Problem   : Duplicate Zeros
//   Difficulty: Easy
//   Tags      : Array, Two Pointers
//   Language  : cpp
//   Solved on : 2026-10-04
//   URL       : https://leetcode.com/problems/duplicate-zeros/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>ans;
        for(int i=0; i<arr.size(); i++){
            ans.push_back(arr[i]);
            if(arr[i]==0){
                ans.push_back(0);
            }
        }
            for(int i=0; i<arr.size(); i++){
                arr[i]=ans[i];
            }
        }   
};