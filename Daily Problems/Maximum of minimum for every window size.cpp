//https://www.geeksforgeeks.org/problems/maximum-of-minimum-for-every-window-size3453/1



class Solution {
  public:
    vector<int> maxOfMins(vector<int>& arr) 
    {
        int n = arr.size();
        stack<int> st;
        vector<int> left(n, -1), right(n, -1);
        for(int i=0; i<n; i++){
            while(!st.empty() and arr[st.top()] >= arr[i]) st.pop();
            
            if(st.empty()) left[i] = -1;
            else left[i] = st.top();
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for(int i=n-1; i>=0; i--){
            while(!st.empty() and arr[st.top()] >= arr[i]) st.pop();
            
            if(st.empty()) right[i] = n;
            else right[i] = st.top();
            st.push(i);
        }
        
        vector<int> ans(n+1);
        for(int i=0; i<n; i++){
            int len = right[i] - left[i] - 1;
            ans[len] = max(ans[len], arr[i]);
        }
        for(int i=n-1; i>=0; i--){
            ans[i] = max(ans[i], ans[i+1]);
        }
        ans.erase(ans.begin());
        return ans;
    }
};
