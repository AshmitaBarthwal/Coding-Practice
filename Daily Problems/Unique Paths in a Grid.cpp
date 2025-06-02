//https://www.geeksforgeeks.org/problems/unique-paths-in-a-grid--170647/1




class Solution {
  public:
    int uniquePaths(vector<vector<int>> &grid) 
    {
        int n, m;
        n=grid.size();
        m=grid[0].size();
        
        if(grid[0][0]==1 || grid[n-1][m-1]==1) return 0;
        
        vector<int>prev(m, 0);
        
        for(int i=0; i<n; i++){
            vector<int>curr(m, 0);
            for(int j=0; j<m; j++){
                if(grid[i][j]==1) continue;
                if (i == 0 && j == 0) {
                    curr[j] = 1;
                } else {
                    if (i > 0) curr[j] += prev[j];
                    if (j > 0) curr[j] += curr[j - 1];
                }
            }
            prev=curr;
        }
        return prev[m-1];
    }
};
