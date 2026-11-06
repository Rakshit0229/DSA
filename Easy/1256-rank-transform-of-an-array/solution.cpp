// ╔══════════════════════════════════════════════╗
//   Problem   : Rank Transform of an Array
//   Difficulty: Easy
//   Tags      : Array, Hash Table, Sorting
//   Language  : cpp
//   Solved on : 2026-11-06
//   URL       : https://leetcode.com/problems/rank-transform-of-an-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sorted=arr;
        sort(sorted.begin(), sorted.end());
        unordered_map<int,int> rank;
        int r=1;

        for(int num:sorted){
            if(rank.find(num)==rank.end()){
                rank[num]=r++;
            }
        }
        vector<int> ans;
        for(int num:arr){
            ans.push_back(rank[num]);
        }
    return ans;
    }
};