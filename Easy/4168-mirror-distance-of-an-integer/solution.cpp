// ╔══════════════════════════════════════════════╗
//   Problem   : Mirror Distance of an Integer
//   Difficulty: Easy
//   Tags      : Math
//   Language  : cpp
//   Solved on : 2026-11-02
//   URL       : https://leetcode.com/problems/mirror-distance-of-an-integer/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int reverse(int n){
        int ans=0;
        while(n>0){
            int digit= n%10;
            ans = ans*10 + digit;
            n=n/10;
        }
    return ans;
    }
    int mirrorDistance(int n) {
    return abs(n-reverse(n));
        
    }
};