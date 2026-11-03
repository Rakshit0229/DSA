// ╔══════════════════════════════════════════════╗
//   Problem   : Count Indices With Opposite Parity
//   Difficulty: Easy
//   Tags      : Array
//   Language  : cpp
//   Solved on : 2026-11-03
//   URL       : https://leetcode.com/problems/count-indices-with-opposite-parity/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2!=0){
                int count=0;
                for(int j=i+1; j<nums.size(); j++){
                    if(nums[j]%2==0){
                        count++;
                    }
                }
                ans.push_back(count);
            }
            else{ int count=0;
            for(int j=i+1; j<nums.size(); j++){
                if(nums[j]%2!=0){
                    count++;
                }
            }
        ans.push_back(count);
            }
        }
    return ans;    
    }
};