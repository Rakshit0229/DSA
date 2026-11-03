// ╔══════════════════════════════════════════════╗
//   Problem   : Minimum Average of Smallest and Largest Elements
//   Difficulty: Easy
//   Tags      : Array, Two Pointers, Sorting
//   Language  : cpp
//   Solved on : 2026-11-02
//   URL       : https://leetcode.com/problems/minimum-average-of-smallest-and-largest-elements/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<double> arr;
        int i=0, j=nums.size()-1;
        while(i<j){
            double avg = (nums[i]+nums[j])/2.0;
            arr.push_back(avg);
            i++;
            j--;
        }
    sort(arr.begin(), arr.end());
    return arr[0];   
    }
};