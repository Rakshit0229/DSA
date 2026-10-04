// ╔══════════════════════════════════════════════╗
//   Problem   : Monotonic Array
//   Difficulty: Easy
//   Tags      : Array
//   Language  : cpp
//   Solved on : 2026-10-03
//   URL       : https://leetcode.com/problems/monotonic-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing = true;
        bool decreasing = true;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i+1]>nums[i]){
                decreasing=false;
            }
           if(nums[i] > nums[i+1]){
    increasing = false;
}
        }
    return increasing|| decreasing;
    }
};