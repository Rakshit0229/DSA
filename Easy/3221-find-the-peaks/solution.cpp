// ╔══════════════════════════════════════════════╗
//   Problem   : Find the Peaks
//   Difficulty: Easy
//   Tags      : Array, Enumeration
//   Language  : cpp
//   Solved on : 2026-11-09
//   URL       : https://leetcode.com/problems/find-the-peaks/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int> arr;
        for(int i=1; i<(mountain.size()-1); i++){
            if(mountain[i]>mountain[i-1] && mountain[i]>mountain[i+1]){
                arr.push_back(i);
            }
        }
    return arr;   
    }
};