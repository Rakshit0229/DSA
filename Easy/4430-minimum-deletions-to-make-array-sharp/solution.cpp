// ╔══════════════════════════════════════════════╗
//   Problem   : Minimum Deletions to Make Array Sharp
//   Difficulty: Easy
//   Tags      : N/A
//   Language  : cpp
//   Solved on : 2026-10-18
//   URL       : https://leetcode.com/problems/minimum-deletions-to-make-array-sharp/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        int prev =nums[0];
        for(int i=1; i<n; i++){
            if(nums[i]==prev){
                count++;            
            }
            else{
                prev = nums[i];
            }
        }
    return count;
    }
};