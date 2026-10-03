// ╔══════════════════════════════════════════════╗
//   Problem   : Find Pivot Index
//   Difficulty: Easy
//   Tags      : Array, Prefix Sum
//   Language  : cpp
//   Solved on : 2026-10-02
//   URL       : https://leetcode.com/problems/find-pivot-index/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum=0;
        int rightsum=0;
        int total=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            total= total + nums[i];
            }
        for(int i=0; i<n; i++){
            rightsum=total-leftsum-nums[i];
            if(leftsum==rightsum){
                return i;
            }
            leftsum=leftsum+nums[i];
        }
    return -1; 
    }
};