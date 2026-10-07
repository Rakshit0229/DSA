// ╔══════════════════════════════════════════════╗
//   Problem   : Maximize Sum Of Array After K Negations
//   Difficulty: Easy
//   Tags      : Array, Greedy, Sorting
//   Language  : cpp
//   Solved on : 2026-10-07
//   URL       : https://leetcode.com/problems/maximize-sum-of-array-after-k-negations/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int sum=0;
        while(k>0){
            int mini = *min_element(nums.begin(), nums.end());
            int index = min_element(nums.begin(), nums.end()) - nums.begin();
            nums[index]=-nums[index];
            k--;
        }
        for(int i=0; i<nums.size(); i++){
            sum= sum+ nums[i];
        }
        return sum;
    }
};