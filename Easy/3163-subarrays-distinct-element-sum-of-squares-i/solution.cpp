// ╔══════════════════════════════════════════════╗
//   Problem   : Subarrays Distinct Element Sum of Squares I
//   Difficulty: Easy
//   Tags      : Array, Hash Table, Binary Indexed Tree, Segment Tree
//   Language  : cpp
//   Solved on : 2026-10-15
//   URL       : https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                unordered_set<int> s;
                for(int k=i; k<=j; k++){
                    s.insert(nums[k]);
                }
                int distinct=s.size();
                ans =  ans+ distinct*distinct;

            }
        }
    return ans; 
        
    }
};