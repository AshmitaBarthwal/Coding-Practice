//https://leetcode.com/problems/type-of-triangle/description/?envType=daily-question&envId=2025-05-19



class Solution {
public:
    string triangleType(vector<int>& nums) 
    {
        string s1="equilateral";
        string s2="isosceles";
        string s3="scalene";
        string s4="none";
        sort(nums.begin(), nums.end());
        if (nums[0] + nums[1] > nums[2])
        {
            set<int>s(nums.begin(),nums.end());
            int n=s.size();
            if(n==1)
            {
                return s1;
            }
            if(n==2)
            {
                return s2;
            }
            if(n==3)
            {
                return s3;
            }
        }
        return s4;
    }
};
