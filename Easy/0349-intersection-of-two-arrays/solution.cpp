// ╔══════════════════════════════════════════════╗
//   Problem   : Intersection of Two Arrays
//   Difficulty: Easy
//   Tags      : Array, Hash Table, Two Pointers, Binary Search, Sorting
//   Language  : cpp
//   Solved on : 2026-10-01
//   URL       : https://leetcode.com/problems/intersection-of-two-arrays/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0; i<nums1.size(); i++){
            bool alreadypresent=false;

            for(int k=0; k<ans.size(); k++){
                if(ans[k]==nums1[i]){
                    alreadypresent=true;
                    break;
                }
            }
            if(alreadypresent){
                continue;
            }
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i]==nums2[j]){
                    ans.push_back(nums1[i]);
                    break;
                }
            }
        }
        return ans;
    }            
};