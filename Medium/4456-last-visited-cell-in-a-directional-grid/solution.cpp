// ╔══════════════════════════════════════════════╗
//   Problem   : Last Visited Cell in a Directional Grid
//   Difficulty: Medium
//   Tags      : N/A
//   Language  : cpp
//   Solved on : 2026-10-18
//   URL       : https://leetcode.com/problems/last-visited-cell-in-a-directional-grid/
// ╚══════════════════════════════════════════════╝

class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        auto limatecega = grid;
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        int r=0;
        int c=0;
        visited[r][c]=true;
        while(true){
            int r1=r;
            int c1=c;;
            if(grid[r][c]=='L'){
                c1--;
            }
            else if(grid[r][c]=='R'){
                c1++;
            }
            else if(grid[r][c]=='U'){
                r1--;
            }
            else if(grid[r][c]=='D'){
                r1++;
            }
            if(r1<0 || r1>=m || c1<0 || c1>=n){
                break;
            }
            if(visited[r1][c1]){
                break;
            }
            r=r1;
            c=c1;
            visited[r][c] = true;
        }
        return {r,c};
        
    }
};