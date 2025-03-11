//https://www.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1



class Solution {
  public:
    int countWays(int n) 
    {
         if (n == 0 || n == 1) return 1;

    int dp[n + 1];
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
    }
};
