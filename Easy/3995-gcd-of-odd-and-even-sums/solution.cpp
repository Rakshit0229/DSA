// ╔══════════════════════════════════════════════╗
//   Problem   : GCD of Odd and Even Sums
//   Difficulty: Easy
//   Tags      : Math, Number Theory
//   Language  : cpp
//   Solved on : 2026-10-02
//   URL       : https://leetcode.com/problems/gcd-of-odd-and-even-sums/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int evensum=0;
        int oddsum=0;
        for(int i=1; i<=n; i++){
            oddsum += 2 * i - 1;
            evensum += 2 * i;
        }
  return gcd(oddsum, evensum);         
    }         
};