// ╔══════════════════════════════════════════════╗
//   Problem   : Count Primes
//   Difficulty: Medium
//   Tags      : Array, Math, Enumeration, Number Theory, Primality Test, Sieve Theory, Prime Number Sieve
//   Language  : cpp
//   Solved on : 2026-10-12
//   URL       : https://leetcode.com/problems/count-primes/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int countPrimes(int n) {
        if(n<=2){
            return 0;
        }
        vector<bool> prime(n, true);
        prime[0]=prime[1]=false;
        for(int i=2; i*i<n; i++){
            if(prime[i]){
                for(int j=i*i; j<n; j +=i){
                    prime[j]=false;
                }
            }
        }
        int count=0;
        for(int i=0; i<n; i++){
            if(prime[i]){
                count++;
            }
        }
    return count;    
    } 
};