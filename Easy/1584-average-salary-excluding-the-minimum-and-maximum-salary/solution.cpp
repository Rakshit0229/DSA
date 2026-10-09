// ╔══════════════════════════════════════════════╗
//   Problem   : Average Salary Excluding the Minimum and Maximum Salary
//   Difficulty: Easy
//   Tags      : Array, Sorting
//   Language  : cpp
//   Solved on : 2026-10-09
//   URL       : https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        int n=salary.size();
        int sum=0;
        for(int i=1; i<n-1;  i++){
            sum=sum+ salary[i];
        }
    return (double)sum/(n-2);    
    }
};