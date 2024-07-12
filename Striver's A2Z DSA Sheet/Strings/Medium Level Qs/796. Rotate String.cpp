# https://leetcode.com/problems/rotate-string/description/

# TC O(n^2)
# SC O(n)

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


# Better approach
# TC O(n)
# SC O(n)

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) {
            return false;
        }
        string concatenated = s + s;
        int n = goal.size();
        for (int i = 0; i <= concatenated.size() - n; ++i) {
            if (concatenated.substr(i, n) == goal) {
                return true;
            }
        }
        return false;
    }
};
