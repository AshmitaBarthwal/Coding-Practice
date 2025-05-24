//https://leetcode.com/problems/find-words-containing-character/description/?envType=daily-question&envId=2025-05-24



class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) 
    {
        vector<int>ans;
        int n=words.size();
        for(int i=0; i<n; i++)
        {
            if (words[i].find(x)!=-1)
                ans.push_back(i);
        }
        return ans;
    }
};
