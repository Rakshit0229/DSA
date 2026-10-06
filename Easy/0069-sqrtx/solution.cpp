// ╔══════════════════════════════════════════════╗
//   Problem   : Sqrt(x)
//   Difficulty: Easy
//   Tags      : Math, Binary Search, Newton's Method
//   Language  : cpp
//   Solved on : 2026-10-05
//   URL       : https://leetcode.com/problems/sqrtx/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int mySqrt(int x) {
        if(x==0){
            return 0;
        }
        int start=1;
        int end=x;
        while(start<=end){
            int mid= start + (end-start)/2;
            if(mid<=x/mid){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    return end;
    }
};