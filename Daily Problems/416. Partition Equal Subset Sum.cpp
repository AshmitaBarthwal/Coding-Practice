//https://leetcode.com/problems/partition-equal-subset-sum/description/?envType=daily-question&envId=2025-04-07



class Solution {
public:
    bool canPartition(vector<int>& nums) 
    {
        int total = accumulate(arr.begin(), arr.end(), 0);
        if (total % 2 != 0) return false;

        int sum = total / 2;
        int n = arr.size();

        vector<bool> prev(sum + 1, false), curr(sum + 1, false);
        prev[0] = true;  

        for (int i = 1; i <= n; i++) 
        {
            curr[0] = true;  
            for (int j = 1; j <= sum; j++) 
            {
                if (j < arr[i - 1])
                    curr[j] = prev[j];
                else
                    curr[j] = prev[j] || prev[j - arr[i - 1]];
            }
            prev = curr;
        }

        return prev[sum];
    }
};
