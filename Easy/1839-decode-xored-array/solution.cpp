// ╔══════════════════════════════════════════════╗
//   Problem   : Decode XORed Array
//   Difficulty: Easy
//   Tags      : Array, Bit Manipulation
//   Language  : cpp
//   Solved on : 2026-10-10
//   URL       : https://leetcode.com/problems/decode-xored-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> arr;
        arr.push_back(first);
        for(int i=0; i<encoded.size(); i++){
            int num  =encoded[i]^arr[i];
            arr.push_back(num);
        }
return arr;
    }
};