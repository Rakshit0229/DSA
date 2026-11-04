// ╔══════════════════════════════════════════════╗
//   Problem   : Build an Array With Stack Operations
//   Difficulty: Medium
//   Tags      : Array, Stack, Simulation
//   Language  : cpp
//   Solved on : 2026-11-04
//   URL       : https://leetcode.com/problems/build-an-array-with-stack-operations/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int j=0;
        for(int i=1; i<=target.back(); i++){
            ans.push_back("Push");
            if(i==target[j]){
                j++;
            }
            else{
                ans.push_back("Pop");
            }

        }
    return ans;    
    }
};