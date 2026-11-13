// ╔══════════════════════════════════════════════╗
//   Problem   : Maximum Element After Decreasing and Rearranging
//   Difficulty: Medium
//   Tags      : Array, Greedy, Sorting
//   Language  : cpp
//   Solved on : 2026-11-13
//   URL       : https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int count=0;
        sort(arr.begin(), arr.end());
        arr[0]=1;
        for(int i=1; i<arr.size(); i++){
            if(abs(arr[i]-arr[i-1])>1){
                arr[i]=arr[i-1]+1;
            }
        }
    return arr[arr.size()-1];    
    }
};