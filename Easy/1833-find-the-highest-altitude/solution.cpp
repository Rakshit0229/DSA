// ╔══════════════════════════════════════════════╗
//   Problem   : Find the Highest Altitude
//   Difficulty: Easy
//   Tags      : Array, Prefix Sum
//   Language  : cpp
//   Solved on : 2026-10-10
//   URL       : https://leetcode.com/problems/find-the-highest-altitude/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
    int altitude=0;
    int maxi=0;
    for(int i=0; i<gain.size(); i++ ){
        altitude = altitude + gain[i];
        maxi= max(maxi, altitude);
    }
    return maxi;      
    }
};