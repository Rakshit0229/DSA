// ╔══════════════════════════════════════════════╗
//   Problem   : Self Dividing Numbers
//   Difficulty: Easy
//   Tags      : Math
//   Language  : cpp
//   Solved on : 2026-09-24
//   URL       : https://leetcode.com/problems/self-dividing-numbers/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left; i<=right; i++) {
            int num=i;
            bool check=true;
            while(num>0){
            int mod=num%10;
            if(mod==0 || i%mod !=0){
                check=false;
                break;                
            }
            num=num/10;
            }
            if(check){
                ans.push_back(i);
        }        
    }return ans;
}
};