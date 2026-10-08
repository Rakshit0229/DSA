// ╔══════════════════════════════════════════════╗
//   Problem   : Element Appearing More Than 25% In Sorted Array
//   Difficulty: Easy
//   Tags      : Array
//   Language  : cpp
//   Solved on : 2026-10-08
//   URL       : https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n= arr.size()/4;
        int ans=0;
        for(int i=0; i<arr.size(); i++){
            int count=0;
            for(int j=0; j<arr.size(); j++){
                if (arr[i]==arr[j]){
                    count++;
                }
            }
            if(count>n){
                ans=arr[i];             
            }
        }
    return ans; 
    }
};