// ╔══════════════════════════════════════════════╗
//   Problem   : Broken Calculator
//   Difficulty: Medium
//   Tags      : Math, Greedy
//   Language  : cpp
//   Solved on : 2026-11-13
//   URL       : https://leetcode.com/problems/broken-calculator/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int ans=0;
        while(target>startValue){
            ans++;
            if(target%2){
                target++;
            }
            else{
                target /=2;
            }
        }
    return startValue-target+ans;
    }
};