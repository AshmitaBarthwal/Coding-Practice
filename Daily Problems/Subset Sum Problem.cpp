//https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1



class Solution {
  public:
    bool isSubsetSum(vector<int>& arr, int sum) 
    {
       int n = arr.size();
        vector<bool> dp(sum + 1, false);
        dp[0] = true;  // Base case: sum 0 is always possible

        for (int num : arr) {
            for (int j = sum; j >= num; j--) {
                dp[j] = dp[j] || dp[j - num];
            }
        }

        return dp[sum];
    }
};
