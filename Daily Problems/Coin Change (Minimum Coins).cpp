//https://www.geeksforgeeks.org/problems/number-of-coins1824/1



class Solution {
  public:
    int minCoins(vector<int> &coins, int sum) 
    {
        vector<int> dp(sum + 1, sum + 1);  // Initialize with an unreachable value
        dp[0] = 0;  // Base case: 0 coins to make sum 0
        
        for (int coin : coins) {  // Iterate over each coin
            for (int i = coin; i <= sum; i++) {  // Try to form sums from 'coin' to 'sum'
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }

        return dp[sum] == sum + 1 ? -1 : dp[sum];
    }
};
