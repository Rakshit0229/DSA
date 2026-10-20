// ╔══════════════════════════════════════════════╗
//   Problem   : Sum of Primes Between Number and Its Reverse
//   Difficulty: Medium
//   Tags      : Math, Number Theory
//   Language  : cpp
//   Solved on : 2026-10-20
//   URL       : https://leetcode.com/problems/sum-of-primes-between-number-and-its-reverse/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
int reverse(int n) {
        int ans=0;
        while(n!=0){
            int digit= n%10;
            if ( (ans>INT_MAX/10 )|| (ans<INT_MIN/10 )){
                return 0;
            }
            ans=(ans*10) + digit;
            n=n/10;
        } return ans; 
}
    int sumOfPrimesInRange(int n) {
        vector<int> arr;
        int rev = reverse(n);
        int mini = min(n, rev);
        int maxi= max(n, rev);
        int sum=0;
        for(int i=max(2, mini); i<=maxi; i++){
            int count=0;
            for(int j=1; j<=i; j++){
                if(i%j==0){
                    count++;
                }
            }
                if(count==2){
                    arr.push_back(i);
                }   
            }
        for(int i=0; i<arr.size(); i++){
            sum = sum + arr[i];
        }
    return sum;  
        
    }
};