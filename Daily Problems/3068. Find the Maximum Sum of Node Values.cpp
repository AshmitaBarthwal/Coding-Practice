//https://leetcode.com/problems/find-the-maximum-sum-of-node-values/description/?envType=daily-question&envId=2025-05-23



class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) 
    {
        long long sum=0;
        int count=0;
        long long dec=INT_MAX;
        for (auto  &num : nums) 
        {
            long long xorValue = num ^ k;

            if (xorValue > num) 
            {
                count++;
                sum += xorValue;
            } 
            else {
                sum += num;
            }

            dec = min(dec, abs(num - xorValue));
        }

        // If the count of xor operations is odd, subtract the minimum nukasan from the sum.
        if (count % 2 != 0) {
            sum -= dec;
        }

        return sum;
    }
};
