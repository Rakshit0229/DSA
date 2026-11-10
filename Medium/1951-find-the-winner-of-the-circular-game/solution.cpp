// ╔══════════════════════════════════════════════╗
//   Problem   : Find the Winner of the Circular Game
//   Difficulty: Medium
//   Tags      : Array, Math, Recursion, Queue, Simulation
//   Language  : cpp
//   Solved on : 2026-11-10
//   URL       : https://leetcode.com/problems/find-the-winner-of-the-circular-game/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int findTheWinner(int n, int k) {
        int ans=0;
        vector<int>arr;
        for(int i=1; i<=n; i++){
            arr.push_back(i);
        }
        int idx=0;
        while(arr.size()>1){
            idx= (idx+k-1)%arr.size();
            arr.erase(arr.begin()+idx);
        } 
    return arr[0];       
    }
};