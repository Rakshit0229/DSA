// ╔══════════════════════════════════════════════╗
//   Problem   : Height Checker
//   Difficulty: Easy
//   Tags      : Array, Sorting, Counting Sort, Bubble Sort
//   Language  : cpp
//   Solved on : 2026-10-07
//   URL       : https://leetcode.com/problems/height-checker/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected=heights;
        int count=0;
        sort(expected.begin(), expected.end());
        for(int i=0; i<heights.size(); i++){
            if(heights[i]!=expected[i]){
                count++;
            }
        } 
        return count;       
    }
};