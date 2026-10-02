// ╔══════════════════════════════════════════════╗
//   Problem   : Find All Numbers Disappeared in an Array
//   Difficulty: Easy
//   Tags      : Array, Hash Table
//   Language  : cpp
//   Solved on : 2026-10-02
//   URL       : https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> arr;
        sort(nums.begin(), nums.end());
        int j=0;
        int n=nums.size();

        for(int i=1; i<=n; i++){
            while(j < n && nums[j] < i) {
                j++;
            }
            if(j<n && nums[j]==i){
                j++;
            }
            else{
                arr.push_back(i);
            }          
    }
    return arr;
    }      
};