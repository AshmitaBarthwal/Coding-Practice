//https://leetcode.com/problems/count-subarrays-with-fixed-bounds/description/?envType=daily-question&envId=2025-04-26




class Solution 
{
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) 
    {
        long long cnt = 0; 
        int last = -1, mini = -1, maxi = -1;

        for (int i = 0; i < nums.size(); ++i) 
        {
            if (nums[i] < minK || nums[i] > maxK)
                last = i;
            if (nums[i] == minK)
                mini = i;
            if (nums[i] == maxK)
                maxi = i;

            int validStart = min(mini, maxi);
            cnt += max(0, validStart - last);
        }
        return cnt;
    }
};
