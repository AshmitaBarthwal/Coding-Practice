//https://www.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1



class Solution {
  public:
    int evaluate(vector<string>& arr) 
    {
        stack<int>st;
        for(int i=0;i<arr.size();i++)
        {
            if((arr[i]=="+")||(arr[i]=="-") || (arr[i]=="*") || (arr[i]=="/")  )
            {
                int first=st.top();
                st.pop();
                
                int second=st.top();
                st.pop();
                if(arr[i]=="+")
                {
                
                    st.push(first+second);
                }
                else if(arr[i]=="-")
                {
                    st.push(second-first);
                }
                else if(arr[i]=="*")
                {
                    
                    st.push(first*second);
                }
                else if(arr[i]=="/")
                {
                    st.push(second/first);
                }
                
            }
            else
            {
                st.push(stoi(arr[i]));
            }
        }
        return st.top();
    }
};
