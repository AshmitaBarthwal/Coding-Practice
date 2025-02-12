//https://leetcode.com/problems/max-sum-of-a-pair-with-equal-sum-of-digits/description/




class Solution 
{
public:
int sumOfDigits(int n) 
{
        int s = 0;
        while (n > 0) 
        {
            s += n % 10;
            n /= 10;
        }
        return s;
    }

    int maximumSum(vector<int>& nums) 
    {
        unordered_map<int, int> mp;  
        int maxi = -1;
        
        for (int it : nums) 
        {
            int s = sumOfDigits(it);
            if (mp.find(s) != mp.end()) 
            {
                maxi = max(maxi, mp[s] + it);
            }
            mp[s] = max(mp[s], it);  
        }
        
        return maxi;
    }
};
