//https://leetcode.com/problems/divide-a-string-into-groups-of-size-k/?envType=daily-question&envId=2025-06-22



class Solution {
public:
    vector<string> divideString(string s, int k, char fill) 
    {
        
        vector<string> ans;
        int n = s.length();
        for(int i = 0; i < n; i += k)
        {
            string temp = "";
            for(int j = i; j < i + k; j++)
            {
                if(j < n)
                    temp += s[j];
                else
                    temp += fill;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
