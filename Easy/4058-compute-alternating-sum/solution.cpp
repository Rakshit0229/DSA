// ╔══════════════════════════════════════════════╗
//   Problem   : Compute Alternating Sum
//   Difficulty: Easy
//   Tags      : Array, Simulation
//   Language  : cpp
//   Solved on : 2026-09-27
//   URL       : https://leetcode.com/problems/compute-alternating-sum/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            if(i%2==0){
                sum += nums[i];
                }
            else {
                sum -= nums[i];
            }
            }
            return sum;
        }
    };