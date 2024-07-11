// https://leetcode.com/problems/isomorphic-strings/description/


//Time: O(min(n, m))
//Space: O(n+m)
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<int,int> mp1;
        map<int,int> mp2;
        int i=0, j=0;
        while(i<s.length() && j<t.length()){
            if(!mp1.count(s[i]) && !mp2.count(t[i])){
                mp1[s[i]]=t[j];
                mp2[t[j]]=s[i];
            }
            else if(mp1[s[i]]!=t[j] || mp2[t[j]]!=s[i])
                return false;
            i++;
            j++;
        }
        return true;
    }
};
