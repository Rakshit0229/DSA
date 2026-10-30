// ╔══════════════════════════════════════════════╗
//   Problem   : Transform Array by Parity
//   Difficulty: Easy
//   Tags      : Array, Sorting, Counting
//   Language  : cpp
//   Solved on : 2026-10-29
//   URL       : https://leetcode.com/problems/transform-array-by-parity/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0){
                ans.push_back(0);
            }
            else{
                ans.push_back(1);
            }
        }
    sort(ans.begin(), ans.end());
    return ans;   
    }
};