// ╔══════════════════════════════════════════════╗
//   Problem   : Beautiful Array
//   Difficulty: Medium
//   Tags      : Array, Math, Divide and Conquer
//   Language  : cpp
//   Solved on : 2026-10-20
//   URL       : https://leetcode.com/problems/beautiful-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int> arr = {1};
        while(arr.size()<n){
            vector<int> temp;
            for(int x: arr){
                if(x*2-1 <=n){
                    temp.push_back(x*2-1);
                }
            }
            for(int x: arr){
                if(x*2<=n){
                    temp.push_back(x*2);
                }
            }
        arr = temp;
        }
    return arr; 
    }
};