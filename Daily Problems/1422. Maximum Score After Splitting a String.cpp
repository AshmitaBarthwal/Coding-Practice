// https://leetcode.com/problems/maximum-score-after-splitting-a-string/description/


class Solution {
public:
    int maxScore(string s) 
    {
        int maxi = 0;
        int leftZero = 0, rightOne = 0;

        for (auto digit : s) {
            if (digit == '1')
                rightOne++;
        }

        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == '0')
                leftZero++;
            else
                rightOne--;
            
            maxi = max(maxi, leftZero + rightOne);
        }
        return maxi;
    }
};
