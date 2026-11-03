// ╔══════════════════════════════════════════════╗
//   Problem   : Kids With the Greatest Number of Candies
//   Difficulty: Easy
//   Tags      : Array
//   Language  : cpp
//   Solved on : 2026-11-03
//   URL       : https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        bool mxs=true;
        vector<bool>ans;
        for(int i=0; i<candies.size(); i++){
            int sum=candies[i]+extraCandies;
            if(sum>= *max_element(candies.begin(), candies.end())){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
    return ans;    
    }
};