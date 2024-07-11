// https://leetcode.com/problems/remove-outermost-parentheses/description/

//Time: O(n)
//Space: O(n)
class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length();
        stack<int> st;
        string result = "";

        for(int i=0;i<n;i++){
            char ch = s[i];
            if(ch == '('){
                if(st.size() > 0)result += ch;
                st.push(ch);
            }else{
                if(st.size() > 1) result += ')';
                st.pop();
            }
        }

        return result;
    }
};
