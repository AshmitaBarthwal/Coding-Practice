//https://leetcode.com/problems/number-of-ways-to-form-a-target-string-given-a-dictionary/description/


class Solution {
public:
    int numWays(vector<string>& words, string target) 
    {
        const int MOD = 1e9 + 7;
        int n = words[0].size(); 
        int m = target.size();   
        
        vector<vector<int>> charFrequency(n, vector<int>(26, 0));
        for (const string& word : words)
        {
            for (int j = 0; j < n; ++j)
            {
                charFrequency[j][word[j] - 'a']++;
            }
        }
        
        vector<int> dp(m + 1, 0);
        dp[0] = 1; 
        
        for (int col = 0; col < n; ++col)
        {
            for (int targetIndex = m - 1; targetIndex >= 0; --targetIndex)
            {
                char targetChar = target[targetIndex];
                int count = charFrequency[col][targetChar - 'a'];
                
                if (count > 0)
                {
                    dp[targetIndex + 1] = (dp[targetIndex + 1] + (long long)dp[targetIndex] * count % MOD) % MOD;
                }
            }
        }
         return dp[m];
    }
};
