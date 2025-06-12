//https://leetcode.com/problems/maximum-difference-between-adjacent-elements-in-a-circular-array/description/?envType=daily-question&envId=2025-06-12



class Solution {
public:

    int maxAdjacentDistance(vector<int>& nums) 
   {
        int n = nums.size();
        int maxi = 0;
        
        for (int i = 0; i < n; i++) 
        {
            int idx = (i + 1) % n;
            int ans = abs(nums[i]- nums[idx]);
            maxi = max(maxi, ans);
        }
        return maxi;
    }  
};
