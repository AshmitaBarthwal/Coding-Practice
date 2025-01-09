//https://leetcode.com/problems/counting-words-with-a-given-prefix/description/



class Solution {
public:
    int prefixCount(vector<string>& words, string pref) 
    {
        int n = words.size();
        int c = 0;
        for (int i = 0; i < n; i++) {
            if (words[i].substr(0, pref.size()) == pref) {
                c++;
            }
        }
        return c;
    }
};
