//https://leetcode.com/problems/maximum-ascending-subarray-sum/description/



class Solution {
public:
    int maxAscendingSum(vector<int>& nums) 
    {
        int n=nums.size();
        int maxi=0,sum=nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[i-1])
            {
                sum+=nums[i];
            }
            else
            {
                maxi=max(maxi,sum);
                sum=nums[i];
            }
        }
         return max(maxi,sum);
    }
    
};
