//https://leetcode.com/problems/lexicographically-minimum-string-after-removing-stars/description/?envType=daily-question&envId=2025-06-07



class Solution {
public:
    string clearStars(string s) 
    {
        int n = s.size();
        vector<bool> removed(n, false);
        vector<vector<int>> charIndices(26);
        for (int i = 0; i < n; ++i) 
        {
            if (s[i] == '*') 
            {
                removed[i] = true;
                for (int j = 0; j < 26; ++j) 
                {
                    if (!charIndices[j].empty()) 
                    {
                        int idx = charIndices[j].back();
                        charIndices[j].pop_back();
                        removed[idx] = true;
                        break;
                    }
                }
            } 
            else 
            {
                charIndices[s[i] - 'a'].push_back(i);
            }
        }
        string result;
        for (int i = 0; i < n; ++i) 
        {
            if (!removed[i] && s[i] != '*') 
            {
                result += s[i];
            }
        }

        return result;
    }
};
        
