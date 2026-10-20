// ╔══════════════════════════════════════════════╗
//   Problem   : Find K Closest Elements
//   Difficulty: Medium
//   Tags      : Array, Two Pointers, Binary Search, Sliding Window, Sorting, Heap (Priority Queue)
//   Language  : cpp
//   Solved on : 2026-10-20
//   URL       : https://leetcode.com/problems/find-k-closest-elements/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        int s=0;
        int e= arr.size()-1;
        while(e-s+1>k){
            if(abs(arr[s]-x)> abs(arr[e]-x)){
                s++;
            }
            else{
                e--;
            }
        }
        for(int i=s; i<=e; i++){
            ans.push_back(arr[i]);
        }
    return ans; 
    }
};