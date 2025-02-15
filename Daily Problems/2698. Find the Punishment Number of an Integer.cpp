//https://leetcode.com/problems/find-the-punishment-number-of-an-integer/description/



class Solution 
{
public:
    bool canPartition(string s, int target, int index, int currentSum) 
    {
        if (index == s.size()) return currentSum == target;
        
        int num = 0;
        for (int i = index; i < s.size(); i++) 
        {
            num = num * 10 + (s[i] - '0');
            if (canPartition(s, target, i + 1, currentSum + num)) 
            {
                return true;
            }
        }
        return false;
    }
    
    int punishmentNumber(int n) {
        int totalSum = 0;
        
        for (int i = 1; i <= n; i++) 
        {
            int square = i * i;
            string sqr = to_string(square);
            if (canPartition(sqr, i, 0, 0)) 
            {
                totalSum += square;
            }
        }
        
        return totalSum;
    }
};
