// ╔══════════════════════════════════════════════╗
//   Problem   : Find Smallest Letter Greater Than Target
//   Difficulty: Easy
//   Tags      : Array, Binary Search
//   Language  : cpp
//   Solved on : 2026-10-22
//   URL       : https://leetcode.com/problems/find-smallest-letter-greater-than-target/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int s=0;
        int e=letters.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(letters[mid]<=target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    return letters[s% letters.size()];  
    }
};