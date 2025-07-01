//https://leetcode.com/problems/find-the-original-typed-string-i/?envType=daily-question&envId=2025-07-01



class Solution {
public:
    int possibleStringCount(string word) 
    {
        int count = 1; 
        int n = word.length();
        int rem;
        int i = 0,j;
        while (i < n) 
        {
            j = i;
            while (j < n && word[j] == word[i]) 
            {
                j++;
            }
            rem = j - i;
            count += rem - 1;
            
            i = j;
        }
    
        return count;
    }
};
