// ╔══════════════════════════════════════════════╗
//   Problem   : Maximum 69 Number
//   Difficulty: Easy
//   Tags      : Math, Greedy
//   Language  : cpp
//   Solved on : 2026-10-17
//   URL       : https://leetcode.com/problems/maximum-69-number/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int maximum69Number (int num) {
        int place =1000;
        while(place>0){
            int digit= (num/place)%10;
            if(digit==6){
                num = num + 3*place;
                break;
            }
            place = place/10;
        }
    return num;   
    }
};