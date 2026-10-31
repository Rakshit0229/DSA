// ╔══════════════════════════════════════════════╗
//   Problem   : Convert the Temperature
//   Difficulty: Easy
//   Tags      : Math
//   Language  : cpp
//   Solved on : 2026-10-31
//   URL       : https://leetcode.com/problems/convert-the-temperature/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
      return {celsius + 273.15, celsius * 1.80 + 32.00};
    }
};