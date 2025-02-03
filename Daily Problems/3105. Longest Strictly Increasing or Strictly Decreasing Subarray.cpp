//https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/




class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) 
    {
        if (nums.empty())
            return 0;

        int maxi = 1;
        int inc = 1, dec = 1;

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[i - 1]) 
            {
                inc += 1;
                dec = 1;
            } 
            else if (nums[i] < nums[i - 1]) 
            {
                dec += 1;
                inc = 1;
            } 
            else 
            {
                inc = 1;
                dec = 1;
            }

            maxi = max(maxi, max(inc, dec));
        }

        return maxi;
    }
};
