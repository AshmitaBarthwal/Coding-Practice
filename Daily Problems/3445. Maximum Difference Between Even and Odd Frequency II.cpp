//https://leetcode.com/problems/maximum-difference-between-even-and-odd-frequency-ii/description/?envType=daily-question&envId=2025-06-11



class Solution {
public:
    int maxDifference(string s, int k) 
    {
        int n = s.size();
        int ans = INT_MIN;
        for (int a = 0; a <= 4; ++a) 
        {
            for (int b = 0; b <= 4; ++b) 
            {
                if (a == b)
                {
                    continue;
                } 

                vector<int> s1(n + 1);
                vector<int> s2(n + 1);

                //Prefix counts
                for (int i = 1; i <= n; ++i) 
                {
                    s1[i] = s1[i - 1] + (s[i - 1] - '0' == a);
                    s2[i] = s2[i - 1] + (s[i - 1] - '0' == b);
                }
                //Matrix for best difference at each parity
                int g[2][2] = {{INT_MIN, INT_MIN}, {INT_MIN, INT_MIN}};
                int j = 0;

                // Sliding window
                for (int i = k; i <= n; ++i) 
                {
                    while (i - j >= k && s1[i] > s1[j] && s2[i] > s2[j]) 
                    {
                        int pa = s1[j] % 2;
                        int pb = s2[j] % 2;
                        g[pa][pb] = max(g[pa][pb], s2[j] - s1[j]);
                        ++j;
                    }

                    // Check if valid
                    int pa = s1[i] % 2;
                    int pb = s2[i] % 2;
                    int need = g[1 - pa][pb];
                    
                    if (need != INT_MIN) 
                    {
                        ans = max(ans, (s1[i] - s2[i]) + need);
                    }
                }
            }
        }

        return ans == INT_MIN ? -1 : ans;
        
    }
};
