// ╔══════════════════════════════════════════════╗
//   Problem   : Number of Steps to Reduce a Number to Zero
//   Difficulty: Easy
//   Tags      : Math, Bit Manipulation
//   Language  : cpp
//   Solved on : 2026-09-20
//   URL       : https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
// ╚══════════════════════════════════════════════╝

class Solution {
    public:
    int numberOfSteps(int n){
        int step_count=0;
        while(n > 0) {

    if(n % 2 == 0) {
        n = n / 2;
    }
    else {
        n = n - 1;
    }

    step_count++;
}
return step_count;
    }
};