//https://leetcode.com/problems/string-matching-in-an-array/description/



class Solution {
public:
    vector<string> stringMatching(vector<string>& words) 
    {
        int n = words.size();
        unordered_set<string> ans;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j && words[i].find(words[j]) != string::npos) {
                    ans.insert(words[j]);
                }
            }
        }
        return vector<string>(ans.begin(), ans.end());
    }
};
