// ╔══════════════════════════════════════════════╗
//   Problem   : Find the Distance Value Between Two Arrays
//   Difficulty: Easy
//   Tags      : Array, Two Pointers, Binary Search, Sorting
//   Language  : cpp
//   Solved on : 2026-10-08
//   URL       : https://leetcode.com/problems/find-the-distance-value-between-two-arrays/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0;
        for(int i=0; i<arr1.size(); i++){
            bool value=true;
            for(int j=0; j<arr2.size(); j++){
                if(abs(arr1[i]-arr2[j]) <= d){
                   value=false;
                   break;
                }
            }
            if(value==true){
                count++;
            }
        }
return count;
        
    }
};