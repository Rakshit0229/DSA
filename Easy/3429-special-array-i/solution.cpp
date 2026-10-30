// ╔══════════════════════════════════════════════╗
//   Problem   : Special Array I
//   Difficulty: Easy
//   Tags      : Array
//   Language  : cpp
//   Solved on : 2026-10-29
//   URL       : https://leetcode.com/problems/special-array-i/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        bool sps=true;;
        for(int i=0; i<(nums.size()-1); i++){
            if(nums[i]%2==nums[i+1]%2){
                sps=false;
                break;               
            }
        }
    return sps;   
    }
};