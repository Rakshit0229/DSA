// ╔══════════════════════════════════════════════╗
//   Problem   : Find Lucky Integer in an Array
//   Difficulty: Easy
//   Tags      : Array, Hash Table, Counting
//   Language  : cpp
//   Solved on : 2026-10-04
//   URL       : https://leetcode.com/problems/find-lucky-integer-in-an-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans=-1;
        for(int i=0; i<arr.size(); i++){
            int count=0;
            for(int j=0; j<arr.size(); j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
                if(count==arr[i]){
                     ans = max(ans, arr[i]);
                }
            }
        return ans;
    }
};