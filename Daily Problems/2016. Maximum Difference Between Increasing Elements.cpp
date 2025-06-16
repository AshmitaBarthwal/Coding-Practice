//https://leetcode.com/problems/maximum-difference-between-increasing-elements/description/?envType=daily-question&envId=2025-06-16



class Solution {
public:
    int maximumDifference(vector<int>& nums) 
    {
        int mini = nums[0];
        int maxi = -1;

        for (int i = 1; i < nums.size(); i++) 
        {
            if (nums[i] > minSoFar) 
            {
                maxi = max(maxi, nums[i] - mini);
            } 
            else 
            {
                mini = nums[i];
            }
        }

        return maxi;
    }
};
