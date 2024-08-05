// https://leetcode.com/problems/valid-parentheses/description/

//Brute: 
//Time: O(n)
//Space: O(n)

// Whenever we get the opening bracket we will push it into the stack. I.e ‘{‘, ’[’, ’(‘.
// Whenever we get the closing bracket we will check if the stack is non-empty or not.
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char ch : s){
            if(ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            } else {
                if(st.empty()) return false;
                if ((ch == ')' && st.top() != '(') || 
                    (ch == '}' && st.top() != '{') ||
                    (ch == ']' && st.top() != '[')) {
                    return false; 
                }
                st.pop();
            }
        }

        return st.empty();
    }
};
