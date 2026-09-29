// ╔══════════════════════════════════════════════╗
//   Problem   : Pow(x, n)
//   Difficulty: Medium
//   Tags      : Math, Recursion
//   Language  : cpp
//   Solved on : 2026-09-23
//   URL       : https://leetcode.com/problems/powx-n/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    double myPow(double x, int n) {
        long long power = n;
        if(power<0) {
        x= 1/x;
        power= -power;
        }
        double ans=1;
        while(power>0) {
            if(power % 2==1) {
                ans=ans*x;
            }
            x=x*x;
            power=power/2;
        }
        return ans;
    }
};