// ╔══════════════════════════════════════════════╗
//   Problem   : Count Integers With Even Digit Sum
//   Difficulty: Easy
//   Tags      : Math, Simulation
//   Language  : cpp
//   Solved on : 2026-10-27
//   URL       : https://leetcode.com/problems/count-integers-with-even-digit-sum/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int checksum(int i){
        int sum=0;
        while(i>0){
            int digit=i%10;
            sum = sum + digit;
            i=i/10;
        }
        return sum;
    }
    int countEven(int num) {
        int count=0;
        for(int i=1; i<=num; i++){
            if(checksum(i)%2==0){
                count++;

            }
        }
    return count;
        
    }
};