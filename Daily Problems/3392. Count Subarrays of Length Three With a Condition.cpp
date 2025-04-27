//https://leetcode.com/problems/count-subarrays-of-length-three-with-a-condition/description/?envType=daily-question&envId=2025-04-27



class Solution {
public:
    int countSubarrays(vector<int>& nums) 
    {
        int c = 0;
        for(int i = 0; i + 2 < nums.size(); i++)
        {
            if(nums[i] + nums[i+2] == nums[i+1] / 2.0)
                c++;
        }
        return c;
    }
};
