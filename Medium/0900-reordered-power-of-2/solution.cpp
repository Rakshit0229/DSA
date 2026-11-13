// ╔══════════════════════════════════════════════╗
//   Problem   : Reordered Power of 2
//   Difficulty: Medium
//   Tags      : Hash Table, Math, Sorting, Counting, Enumeration
//   Language  : cpp
//   Solved on : 2026-11-13
//   URL       : https://leetcode.com/problems/reordered-power-of-2/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string target= to_string(n);
        sort(target.begin(), target.end());
        for(int i=0;i<31; i++){
            string s= to_string(1<<i);
            sort(s.begin(), s.end());
            if(s==target){
                return true;
            }
        }
    return false;    
    }
};