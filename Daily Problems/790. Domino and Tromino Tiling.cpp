//https://leetcode.com/problems/domino-and-tromino-tiling/description/?envType=daily-question&envId=2025-05-05



class Solution 
{
public:
    int M = 1e9+7;

    int numTilings(int n) 
    {
        if(n == 1) return 1;

        vector<long long> dp(n + 1);
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;

        for(int i = 3; i <= n; i++){
            dp[i] = (2 * dp[i-1] + dp[i-3]) % M;
        }

        return dp[n];
    }
};
