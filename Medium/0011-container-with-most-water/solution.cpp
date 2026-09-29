// ╔══════════════════════════════════════════════╗
//   Problem   : Container With Most Water
//   Difficulty: Medium
//   Tags      : Array, Two Pointers, Greedy
//   Language  : cpp
//   Solved on : 2026-09-28
//   URL       : https://leetcode.com/problems/container-with-most-water/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int ans=0;
        while(i<j){
        int h=min(height[i], height[j]);
        int width=j-i;
        int area=width*h;
        if(area>ans){
            ans=area;
        }
        if(height[i]<height[j]){
            i++;
        }
        else{
            j--;
        }
        }
        return ans;
    }
};