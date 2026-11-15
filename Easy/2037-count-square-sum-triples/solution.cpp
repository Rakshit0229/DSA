// ╔══════════════════════════════════════════════╗
//   Problem   : Count Square Sum Triples
//   Difficulty: Easy
//   Tags      : Math, Enumeration
//   Language  : cpp
//   Solved on : 2026-11-15
//   URL       : https://leetcode.com/problems/count-square-sum-triples/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int countTriples(int n) {
        int count=0;
        for(int i=1; i<n; i++){
            for(int j=1; j<n; j++){
                for(int k=1; k<=n; k++){
               if(i*i + j*j == k*k){
                    count++;
                }
            }
            }
        }
    return count;   
    }
};