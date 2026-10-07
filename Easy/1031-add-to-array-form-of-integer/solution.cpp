// ╔══════════════════════════════════════════════╗
//   Problem   : Add to Array-Form of Integer
//   Difficulty: Easy
//   Tags      : Array, Math
//   Language  : cpp
//   Solved on : 2026-10-07
//   URL       : https://leetcode.com/problems/add-to-array-form-of-integer/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> arr;
        int i=num.size()-1;
        while(i>=0 || k>0){
            if(i>=0){
                k=k+num[i];
                i--;
            }
            int digit=k%10;
            arr.insert(arr.begin(), digit);  
            k=k/10;      
        }
        return arr;
    }
};