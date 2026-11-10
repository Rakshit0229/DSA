// ╔══════════════════════════════════════════════╗
//   Problem   : Minimum Element After Replacement With Digit Sum
//   Difficulty: Easy
//   Tags      : Array, Math
//   Language  : cpp
//   Solved on : 2026-11-09
//   URL       : https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
int sum(int n){
    int sum1=0;
    while(n>0){
        int digit=n%10;
        sum1 +=digit;
        n=n/10;
    }
    return sum1;
}
    int minElement(vector<int>& nums) {
        vector<int>arr;
        for(int i=0; i<nums.size(); i++){
            arr.push_back(sum(nums[i]));
        }
    sort(arr.begin(), arr.end());
    return arr[0];
        
    }
};