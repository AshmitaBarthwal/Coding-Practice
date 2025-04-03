//https://leetcode.com/problems/maximum-value-of-an-ordered-triplet-ii/description/?envType=daily-question&envId=2025-04-03



class Solution 
{
public:
    long long maximumTripletValue(vector<int>& nums) 
    {
        int maxi = INT_MIN, diff = 0, n = nums.size();
        long long res = 0;
        
        for (int i = 0; i < n; i++) 
        {
            maxi = max(maxi, nums[i]); 
            if (i >= 2)
                res = max(res, (long long)diff * nums[i]); 
            if (i >= 1)
                diff = max(diff, maxi - nums[i]); 
        }
        
        return res;
    }
};
