// ╔══════════════════════════════════════════════╗
//   Problem   : Total Hamming Distance
//   Difficulty: Medium
//   Tags      : Array, Math, Bit Manipulation
//   Language  : cpp
//   Solved on : 2026-10-19
//   URL       : https://leetcode.com/problems/total-hamming-distance/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0; i<32; i++){
            int count=0;
            for(int j=0; j<n; j++){
                if((nums[j])&(1<<i)){
                    count++;
                }
            }
            sum = sum + count*(n-count);
        }
        return sum;     
    }
};