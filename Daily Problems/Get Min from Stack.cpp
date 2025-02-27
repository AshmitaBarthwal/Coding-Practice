//https://www.geeksforgeeks.org/problems/get-minimum-element-from-stack/1



class Solution 
{
  public:
    int mini = INT_MAX;
    stack<pair<int, int>> st;
    Solution() 
    {
        // code here
    }

    // Add an element to the top of Stack
    void push(int x) 
    {
        // code here
        
        if(x < mini)
            mini = x;
        
        st.push({x, mini});
    }

    // Remove the top element from the Stack
    void pop() 
    {
        // code here
        
        if(st.empty())
            return;
         
        st.pop();
        
        if(st.empty())
            mini = INT_MAX;
        
        else
            mini = st.top().second;
    }

    // Returns top element of the Stack
    int peek() 
    {
        // code here
        
        if(st.empty())
            return -1;
            
        else
            return st.top().first;
    }

    // Finds minimum element of Stack
    int getMin() 
    {
        // code here
        
        if(st.empty())
            return -1;
            
        else
            return st.top().second;
    }
};
