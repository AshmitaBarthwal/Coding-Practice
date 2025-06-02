//https://www.geeksforgeeks.org/problems/unique-paths-in-a-grid--170647/1




class Solution {
  public:
    int uniquePaths(vector<vector<int>> &grid) 
    {
        int r=grid.length;
        int c=grid[0].length;
        int[][] dp=new int[r][c];
        for(int i=0;i<c;i++)
        {
            if(grid[0][i]==0) dp[0][i]=1;
            else break;
        }
        for(int i=0;i<r;i++)
        {
            if(grid[i][0]==0) dp[i][0]=1;
            else break;
        }
        for(int i=1;i<r;i++)
        {
            for(int j=1;j<c;j++)
            {
                if(grid[i][j]==0)
                {
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
                }
            }
        }
        return dp[r-1][c-1];
    }
};
