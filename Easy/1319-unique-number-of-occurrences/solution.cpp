// ╔══════════════════════════════════════════════╗
//   Problem   : Unique Number of Occurrences
//   Difficulty: Easy
//   Tags      : Array, Hash Table
//   Language  : cpp
//   Solved on : 2026-09-27
//   URL       : https://leetcode.com/problems/unique-number-of-occurrences/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> counts;

        for(int i=0; i<arr.size(); i++){
            bool visited=false;

        for(int k=0; k<i; k++){
            if(arr[i]==arr[k]){
                visited=true;
                break;
            }
        }
        if(visited){
            continue;
        }
        int count=0;
        for(int j=0; j<arr.size(); j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        for(int k=0; k<counts.size(); k++){
            if(counts[k]==count){
                return false;
            }
        }
        counts.push_back(count);
      }
    return true; 
    }
};