//https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/description/



class Solution {
public:
    bool areAlmostEqual(string s1, string s2) 
    {
        int n = s1.length();
        vector<int> diff;
        
        for (int i = 0; i < n; i++) {
            if (s1[i] != s2[i]) {
                diff.push_back(i);
            }
        }
        
        if (diff.size() == 0) return true;
        if (diff.size() == 2) {
            int i = diff[0], j = diff[1];
            return (s1[i] == s2[j] && s1[j] == s2[i]);
        }
        
        return false;
    }
};
