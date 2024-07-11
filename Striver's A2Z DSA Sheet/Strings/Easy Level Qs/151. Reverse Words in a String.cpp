//  https://leetcode.com/problems/reverse-words-in-a-string/description/

// Time: O(n)
// Space: O(1)

class Solution {
public:
    string reverseWords(string s) 
    {
        
        stringstream ss(s);
        string ans="";
        string word="";
        while(ss>> word)
        {
            ans= word+" "+ans;
        }
        return ans.substr(0,ans.size()-1);
    }
};
