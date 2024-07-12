// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/


//Time: O(n)
//Space: O(1)
class Solution {
public:
    int maxDepth(string s) {
        int count=0, max_count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') count++;
            else if(s[i]==')') count--;
            max_count = max(max_count, count);
        }
        return max_count;
    }
};
