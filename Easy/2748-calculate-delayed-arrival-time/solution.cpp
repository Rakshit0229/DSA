// ╔══════════════════════════════════════════════╗
//   Problem   : Calculate Delayed Arrival Time
//   Difficulty: Easy
//   Tags      : Math
//   Language  : cpp
//   Solved on : 2026-11-09
//   URL       : https://leetcode.com/problems/calculate-delayed-arrival-time/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        return (arrivalTime+delayedTime)%24;
        
    }
};