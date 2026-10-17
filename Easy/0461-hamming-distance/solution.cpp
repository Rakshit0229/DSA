// ╔══════════════════════════════════════════════╗
//   Problem   : Hamming Distance
//   Difficulty: Easy
//   Tags      : Bit Manipulation
//   Language  : cpp
//   Solved on : 2026-10-17
//   URL       : https://leetcode.com/problems/hamming-distance/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int hammingDistance(int x, int y) {
        int a= x^y;
        int count=0;
        while(a>0){
            if(a&1){
                count++;
            }
        a=a>>1;
        }
    return count; 
    }
};