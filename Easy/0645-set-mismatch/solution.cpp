// ╔══════════════════════════════════════════════╗
//   Problem   : Set Mismatch
//   Difficulty: Easy
//   Tags      : Array, Hash Table, Bit Manipulation, Sorting
//   Language  : cpp
//   Solved on : 2026-10-02
//   URL       : https://leetcode.com/problems/set-mismatch/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> arr;
        int n=nums.size();
        for(int j=1; j<=n; j++){
            bool found=false;
            for(int i=0; i<n; i++){
                if(nums[i]==j){
                    found= true;
                    break;
                }
            }
            
            if(found==false){
                arr.push_back(j);
            }
            }
            for(int i=0; i<n; i++){
                for(int j=i+1; j<n; j++){
                    if(nums[i]==nums[j]){
                        arr.insert(arr.begin(), nums[i]);
                        return arr;
                    }

                }
            }
    return arr; 
    }
};