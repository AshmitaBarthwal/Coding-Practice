//https://leetcode.com/problems/maximum-manhattan-distance-after-k-changes/description/?envType=daily-question&envId=2025-06-20



class Solution {
public:
    int maxDistance(string s, int k) 
    {
        int N = 0, S = 0, E = 0, W = 0, maxMD = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'N') N++;
            else if (s[i] == 'S') S++;
            else if (s[i] == 'E') E++;
            else if (s[i] == 'W') W++;

            int steps = i + 1;
            int current = abs(N - S) + abs(E - W);
            int missing = steps - current;
            int extra = min(2 * k, missing);
            maxMD = max(maxMD, current + extra);
        }
        return maxMD;
    }
};
