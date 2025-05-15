//https://leetcode.com/problems/longest-unequal-adjacent-groups-subsequence-i/description/?envType=daily-question&envId=2025-05-15



class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) 
    {
        vector<string> result;
        int last = -1;
        for (int i = 0; i < words.size(); ++i) 
        {
            if (groups[i] != last) {
                result.push_back(words[i]);
                last = groups[i];
            }
        }
        return result;
    }
};
