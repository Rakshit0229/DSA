// ╔══════════════════════════════════════════════╗
//   Problem   : Three Consecutive Odds
//   Difficulty: Easy
//   Tags      : Array
//   Language  : cpp
//   Solved on : 2026-10-09
//   URL       : https://leetcode.com/problems/three-consecutive-odds/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count=0;
        for(int i=0; i<arr.size()-2; i++){
            if(arr.size()<3){
                return false;
            }
            if(arr[i]%2!=0 && arr[i+1]%2!=0 && arr[i+2]%2!=0){
                count++;
            }

        if(count>=1){
            return true;
        }
        }
    return false; 
    }
};