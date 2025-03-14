//https://www.geeksforgeeks.org/problems/coin-change2448/1



class Solution {
  public:
    int count(vector<int>& coins, int sum) 
    {
        int n=coins.size();
        
        vector<int> dp(sum+1,0);
        dp[0] = 1;
           
        for(int i=0;i<n;i++)
        {
            for(int s=coins[i];s<=sum;s++)
               {
                    dp[s]+=dp[s-coins[i]];
               }
           }
       return dp[sum];
    }
};
