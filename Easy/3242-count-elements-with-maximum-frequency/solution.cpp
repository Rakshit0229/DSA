// ╔══════════════════════════════════════════════╗
//   Problem   : Count Elements With Maximum Frequency
//   Difficulty: Easy
//   Tags      : Array, Hash Table, Counting
//   Language  : cpp
//   Solved on : 2026-11-09
//   URL       : https://leetcode.com/problems/count-elements-with-maximum-frequency/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>freq;
        int mf=0;
        for(int num:nums){
            freq[num]++;
            mf=max(mf, freq[num]);
        }
        int ans=0;
        for(auto &p:freq){
            if(p.second==mf){
                ans +=p.second;
            }
        }
    return ans;    
    }
};