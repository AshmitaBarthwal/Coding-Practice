//https://leetcode.com/problems/maximum-difference-by-remapping-a-digit/?envType=daily-question&envId=2025-06-14



class Solution 
{
public:
    int minMaxDifference(int num) 
    {
         string s = to_string(num);
        
        // For maximum value
        string maxi = s;
        for (char it : s) 
        {
            if (it != '9') 
            {
                char to_replace = it;
                for (char& ch : maxi) 
                {
                    if (ch == to_replace) ch = '9';
                }
                break;
            }
        }

        // For minimum value
        string mini = s;
        for (char it : s) 
        {
            if (it != '0') 
            {
                char to_replace = it;
                for (char& ch : mini) 
                {
                    if (ch == to_replace) ch = '0';
                }
                break;
            }
        }

        int maxVal = stoi(maxi);
        int minVal = stoi(mini);
        return maxVal - minVal;
    }
};
