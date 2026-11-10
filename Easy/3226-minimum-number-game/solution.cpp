// ╔══════════════════════════════════════════════╗
//   Problem   : Minimum Number Game
//   Difficulty: Easy
//   Tags      : Array, Sorting, Heap (Priority Queue), Simulation
//   Language  : cpp
//   Solved on : 2026-11-09
//   URL       : https://leetcode.com/problems/minimum-number-game/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i=i+2){
            arr.push_back(nums[i+1]);
            arr.push_back(nums[i]);

        }
    return arr;   
    }
};