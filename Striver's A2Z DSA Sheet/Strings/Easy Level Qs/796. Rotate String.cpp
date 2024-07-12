// https://leetcode.com/problems/rotate-string/description/

//Time: O(n^2)
//Space: O(n)

class Solution {
public:
    bool rotateString(string s, string goal) {
        int i=0,n=s.size();
        while(i<n)
        {
            s=s.substr(1)+s[0];
            if(s==goal)
            {
                return true ;
            }
            i++;
        }
        return false;
        
    }
};

//Time: O(n)
//Space: O(n)
class Solution {
public:
    bool rotateString(string str, string goal) {
        if (str.length() != goal.length()) return false;
        string concatenated = str + str;
        return concatenated.find(goal) != string::npos;
    }
};
