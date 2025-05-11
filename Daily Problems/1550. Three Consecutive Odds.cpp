//https://leetcode.com/problems/three-consecutive-odds/description/?envType=daily-question&envId=2025-05-11




class Solution 
{
public:
    bool threeConsecutiveOdds(vector<int>& arr) 
    {
        int n=arr.size();
        int count = 0;
        for (int i = 0; i < n; i++) 
        {
            if (arr[i] % 2 != 0) 
            {
                count++;
                if (count == 3) 
                {
                    return true;
                }
            } 
            else 
            {
                count = 0;
            }
        }
        return false;
    }
};
