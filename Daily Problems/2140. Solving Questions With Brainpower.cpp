//https://leetcode.com/problems/solving-questions-with-brainpower/description/?envType=daily-question&envId=2025-04-01



class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) 
    {
        const int n = questions.size();
        long* d = (long*)alloca((n + 1) * sizeof(long));
        d[n] = 0;
        for (int i = n - 1; i >= 0; --i)
            d[i] = max(questions[i][0] + d[min(1 + i + questions[i][1], n)], d[1 + i]);
        return d[0];
    }
};
