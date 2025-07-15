//https://leetcode.com/problems/valid-word/description/?envType=daily-question&envId=2025-07-15



class Solution {
public:
    bool isValid(string word) 
    {
        unordered_set<char>vowel={'a','e','i','o','u','A','E','I','O','U'};
        int n1=false,n2=false;
        if(word.length()<3)
        {
            return false;
        }
        for(char c:word)
        {
            if(isalpha(c))
            {
                if(vowel.count(c)>0)
                {
                    n1=true;
                }
                else
                {
                    n2=true;
                }
            }
            else if(!isdigit(c))
            {
               return false;
            }
        }
        return n1 && n2;
    }
};
