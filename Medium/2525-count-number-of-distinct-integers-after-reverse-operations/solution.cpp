// ╔══════════════════════════════════════════════╗
//   Problem   : Count Number of Distinct Integers After Reverse Operations
//   Difficulty: Medium
//   Tags      : Array, Hash Table, Math, Counting
//   Language  : cpp
//   Solved on : 2026-10-21
//   URL       : https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> st;
        for(int x: nums){
            st.insert(x);
            int reverse=0;
            while(x>0){
                reverse= reverse*10 + x %10;
                x = x/10;
            }
        st.insert(reverse);
        }
    return st.size();  
    }
};