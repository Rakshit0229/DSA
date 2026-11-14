// ╔══════════════════════════════════════════════╗
//   Problem   : Largest Perimeter Triangle
//   Difficulty: Easy
//   Tags      : Array, Math, Greedy, Sorting, Quicksort, Polygons
//   Language  : cpp
//   Solved on : 2026-11-14
//   URL       : https://leetcode.com/problems/largest-perimeter-triangle/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        for(int i=0; i<nums.size()-2; i++){
            if(nums[i]<nums[i+1]+nums[i+2]){
                return nums[i]+nums[i+1]+nums[i+2];
            }
        }
    return 0;    
    }
};