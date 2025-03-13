//https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1



class Solution {
  public:
    int knapsack(int W, vector<int> &val, vector<int> &wt) 
    {
            vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

            for (int i = 1; i <= n; i++) 
            {
                for (int j = 0; j <= W; j++) 
                {
                    if (wt[i - 1] <= j)
                        dp[i][j] = max(dp[i - 1][j], val[i - 1] + dp[i - 1][j - wt[i - 1]]);
                    else
                        dp[i][j] = dp[i - 1][j];
                }
            }
        
            return dp[n][W];
        
    }
};
