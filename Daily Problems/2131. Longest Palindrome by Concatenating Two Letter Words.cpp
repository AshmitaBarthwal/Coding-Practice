//https://leetcode.com/problems/longest-palindrome-by-concatenating-two-letter-words/description/?envType=daily-question&envId=2025-05-25



class Solution 
{
public:
    int longestPalindrome(vector<string>& words) 
    {
        int freq[26][26] = {0};
        for (const string& w : words)
        {
            int a = w[0] - 'a';
            int b = w[1] - 'a';
            freq[a][b]++;
        }
        
        int total = 0;
        bool center = false;
        for (int i = 0; i < 26; i++)
        {
            total += (freq[i][i] / 2) * 4;

            if (freq[i][i] % 2 == 1)
            {
                center = true;
            }
            for (int j = i + 1; j < 26; j++)
            {
                int pairs = min(freq[i][j], freq[j][i]);
                total += pairs * 4;
            }
        }
        if (center)
            total += 2;
        return total;
    }
};
