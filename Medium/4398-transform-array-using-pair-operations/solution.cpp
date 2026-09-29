// ╔══════════════════════════════════════════════╗
//   Problem   : Transform Array Using Pair Operations
//   Difficulty: Medium
//   Tags      : N/A
//   Language  : cpp
//   Solved on : 2026-09-27
//   URL       : https://leetcode.com/problems/transform-array-using-pair-operations/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long sum1=0;
        long long sum2=0;
        for(int i=0; i<source.size(); i++){
            sum1= sum1 + source[i];
        }
        for(int i=0; i<target.size(); i++){
            sum2=sum2+target[i];
        }
        if(sum1==sum2){
            return true;}
        else {
            return false;
        }
        }
};