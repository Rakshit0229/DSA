// ╔══════════════════════════════════════════════╗
//   Problem   : Kth Smallest Element in a Sorted Matrix
//   Difficulty: Medium
//   Tags      : Array, Binary Search, Sorting, Heap (Priority Queue), Matrix
//   Language  : cpp
//   Solved on : 2026-10-15
//   URL       : https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> arr;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix.size(); j++){
                arr.push_back(matrix[i][j]);
            }
        }
        sort(arr.begin(), arr.end());
        return arr[k-1];   
    }
};