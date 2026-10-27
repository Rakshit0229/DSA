// ╔══════════════════════════════════════════════╗
//   Problem   : Non-decreasing Array
//   Difficulty: Medium
//   Tags      : Array
//   Language  : cpp
//   Solved on : 2026-10-27
//   URL       : https://leetcode.com/problems/non-decreasing-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                count++;
                if (count > 1) {
                    return false;
                }
                if (i == 0 || nums[i - 1] <= nums[i + 1]) {
                    nums[i] = nums[i + 1];
                } else {
                    nums[i + 1] = nums[i];
                }
            }
        }
        return true;
    }
};