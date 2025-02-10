//https://leetcode.com/problems/clear-digits/description/



class Solution 
{
public:
    string clearDigits(string s) 
    {
        string temp;
        for (char ch : s) 
        {
        if (isdigit(ch)) 
        {
            if (!temp.empty() && !isdigit(temp.back())) 
            {
                temp.pop_back();  
            }
        } 
        else 
        {
            temp += ch;
        }
    }
    return temp;

    }
};
