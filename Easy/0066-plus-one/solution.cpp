// ╔══════════════════════════════════════════════╗
//   Problem   : Plus One
//   Difficulty: Easy
//   Tags      : Array, Math
//   Language  : cpp
//   Solved on : 2026-09-28
//   URL       : https://leetcode.com/problems/plus-one/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1; i>=0; i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            else{
                digits[i]=0;
            }
        }
        digits.insert(digits.begin(), 1);
      return digits;
    }
};