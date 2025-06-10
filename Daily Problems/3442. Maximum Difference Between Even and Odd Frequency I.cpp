//https://leetcode.com/problems/maximum-difference-between-even-and-odd-frequency-i/description/?envType=daily-question&envId=2025-06-10



class Solution {
public:
    int maxDifference(string s) 
    {
        unordered_map<char,int>mp;
        int me=INT_MAX,mo=-1;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second % 2==0)
            {
                me=min(me,it.second);
            }
            else
            {
                mo=max(mo,it.second);
            }
        }
        return mo-me;
    }
};
