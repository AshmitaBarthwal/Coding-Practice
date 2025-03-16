//https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1



class Solution {
  public:
    int minJumps(vector<int>& arr) 
    {
        if(arr[0] == 0)
        return -1;
        int n = arr.size();
        vector<int> dp(n,INT_MAX);
        dp[0] = 0;
        for(int i = 1;i<n;i++)
        {
            for(int j = i-1;j>=0;j--)
            {
                if(arr[j] + j >= i && dp[j] != INT_MAX)
                {
                    dp[i] = min(dp[i], 1+dp[j]);
                }
            }
        }
        int ans = dp[n-1];
        if(ans == INT_MAX)
        return -1;
        
        return ans;
    }
};
