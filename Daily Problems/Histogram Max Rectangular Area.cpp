//https://www.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1



class Solution {
  public:
    int getMaxArea(vector<int> &arr) 
    {
            stack<int> st;
            int max_area = 0;
            int n = arr.size();
        
            for (int i = 0; i <= n; i++) 
            {
                while (!st.empty() && (i == n || arr[i] < arr[st.top()])) 
                {
                    int height = arr[st.top()];
                    st.pop();
                    int width = st.empty() ? i : (i - st.top() - 1);
                    max_area = max(max_area, height * width);
                }
                st.push(i);
            }
            
            return max_area;
    }
};
