// ╔══════════════════════════════════════════════╗
//   Problem   : Lemonade Change
//   Difficulty: Easy
//   Tags      : Array, Greedy
//   Language  : cpp
//   Solved on : 2026-10-06
//   URL       : https://leetcode.com/problems/lemonade-change/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0;
        int  ten=0;
        for(int i=0;  i<bills.size(); i++){
            if(bills[i]==5){
                five++;
            }
            if(bills[i]==10){
                if(five==0){
                    return false;
                }
                five--;
                ten++;
            }
            if(bills[i]==20){
                if(ten>0 && five>0){
                    ten--;
                    five--;
                }
                else if(five>=3){
                    five=five-3;
                }
                else {
                    return false;
                }
            }
        }
    return true;
        
    }
};