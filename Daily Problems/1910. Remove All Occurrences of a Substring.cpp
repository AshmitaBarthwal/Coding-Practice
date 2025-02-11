//https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/



class Solution {
public:
    string removeOccurrences(string s, string part) 
    {
        int pos;
        while ((pos = s.find(part)) != string::npos) 
        {
            s.erase(pos, part.length());
        }
        return s;
    }
};
