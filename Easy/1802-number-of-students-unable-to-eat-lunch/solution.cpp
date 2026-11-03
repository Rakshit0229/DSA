// ╔══════════════════════════════════════════════╗
//   Problem   : Number of Students Unable to Eat Lunch
//   Difficulty: Easy
//   Tags      : Array, Stack, Queue, Simulation
//   Language  : cpp
//   Solved on : 2026-11-03
//   URL       : https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int rotations=0;
        while(!students.empty() && rotations<students.size()){
            if(students[0]==sandwiches[0]){
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                rotations=0;
            }
            else{
                students.push_back(students[0]);
                students.erase(students.begin());
                rotations++;
            }
        }
        return students.size();
    }
};