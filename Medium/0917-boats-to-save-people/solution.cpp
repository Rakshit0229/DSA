// ╔══════════════════════════════════════════════╗
//   Problem   : Boats to Save People
//   Difficulty: Medium
//   Tags      : Array, Two Pointers, Greedy, Sorting, Timsort
//   Language  : cpp
//   Solved on : 2026-11-13
//   URL       : https://leetcode.com/problems/boats-to-save-people/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int i=0;
        int j=people.size()-1;
        int boats=0;
        while(i<=j){
            if(people[i]+people[j]<=limit){
                i++;
            }
            j--;
            boats++;
        }
        return boats;    
    }
};