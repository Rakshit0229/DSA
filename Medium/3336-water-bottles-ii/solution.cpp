// ╔══════════════════════════════════════════════╗
//   Problem   : Water Bottles II
//   Difficulty: Medium
//   Tags      : Math, Simulation
//   Language  : cpp
//   Solved on : 2026-10-20
//   URL       : https://leetcode.com/problems/water-bottles-ii/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans= numBottles;
        while(numBottles>=numExchange){
            numBottles= numBottles-numExchange + 1;
            numExchange++;
            ans++;
        }
        return ans;
    }
};