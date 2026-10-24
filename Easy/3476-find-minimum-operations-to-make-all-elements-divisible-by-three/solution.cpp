// ╔══════════════════════════════════════════════╗
//   Problem   : Find Minimum Operations to Make All Elements Divisible by Three
//   Difficulty: Easy
//   Tags      : Array, Math
//   Language  : cpp
//   Solved on : 2026-10-24
//   URL       : https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%3!=0){
                ans++;
            }
        }
    return ans;  
    }
};