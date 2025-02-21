//https://www.geeksforgeeks.org/problems/parenthesis-checker2744/1



class Solution {
  public:
    bool isBalanced(string& s) 
    {
         stack<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
            else{
                if(st.empty()) return false;
                char top = st.top();
                if((s[i]==')' && top=='(') || 
                (s[i]=='}' && top == '{') || 
                (s[i]==']' && top == '[') )
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
         return st.empty();
    }
};
