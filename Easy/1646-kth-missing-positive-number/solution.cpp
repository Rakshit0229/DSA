// ╔══════════════════════════════════════════════╗
//   Problem   : Kth Missing Positive Number
//   Difficulty: Easy
//   Tags      : Array, Binary Search
//   Language  : cpp
//   Solved on : 2026-10-01
//   URL       : https://leetcode.com/problems/kth-missing-positive-number/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int num=1;
        while(k>0){
            bool found=false;
            for(int i=0; i<arr.size(); i++){
                if(arr[i]==num){
                    found=true;
                    break;
                }
            }
            if(found==false){
                k--;
            }
            num++;

        }
        return num-1;
        
    }
};