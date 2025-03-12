//https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/description/?envType=daily-question&envId=2025-03-12



class Solution {
public:
    int maximumCount(vector<int>& nums) 
    {
        int neg=0,pos=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                if(nums[i]<0)
                {
                    neg++;
                }
                else
                {
                    pos++;
                }
            }
        }
        return max(neg,pos);
    }
};
