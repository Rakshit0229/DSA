// ╔══════════════════════════════════════════════╗
//   Problem   : Count Number of Teams
//   Difficulty: Medium
//   Tags      : Array, Dynamic Programming, Binary Indexed Tree, Segment Tree
//   Language  : cpp
//   Solved on : 2026-11-08
//   URL       : https://leetcode.com/problems/count-number-of-teams/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int numTeams(vector<int>& rating) {
        int count=0;
        for(int i=0; i<rating.size(); i++){
           for(int j=i+1; j<rating.size(); j++){
            for(int k=j+1; k<rating.size(); k++){
            if(rating[i] < rating[j] && rating[j]< rating[k] ||rating[i] > rating[j] && rating[j]> rating[k]){
                count++;
            }
            }
           }
        }
    return count;    
    }
};