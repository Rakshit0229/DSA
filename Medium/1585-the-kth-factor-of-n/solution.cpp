// ╔══════════════════════════════════════════════╗
//   Problem   : The kth Factor of n
//   Difficulty: Medium
//   Tags      : Math, Number Theory, Prime Factorization
//   Language  : cpp
//   Solved on : 2026-10-20
//   URL       : https://leetcode.com/problems/the-kth-factor-of-n/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> arr;
        for(int i=1; i<=n; i++){
            if(n%i==0){
                arr.push_back(i);
            }
        }
        if(arr.size()<k){
            return -1;
        }
    return arr[k-1];
    }
};