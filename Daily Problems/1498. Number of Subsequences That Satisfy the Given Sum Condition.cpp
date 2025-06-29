//https://leetcode.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition/description/?envType=daily-question&envId=2025-06-29



class Solution {
public:
    int numSubseq(vector<int>& nums, int target) 
    {
        const int MOD = 1e9 + 7;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        vector<int> powers(n, 1);
        for (int i = 1; i < n; ++i) 
        {
            powers[i] = (powers[i - 1] * 2) % MOD;
        }

        int left = 0;
        int right = n - 1;
        int result = 0;
        while (left <= right) 
        {
            if (nums[left] + nums[right] <= target) 
            {
                result = (result + powers[right - left]) % MOD;
                ++left;
            } 
            else 
            {
                --right;
            }
        }
        return result;
    }
};
