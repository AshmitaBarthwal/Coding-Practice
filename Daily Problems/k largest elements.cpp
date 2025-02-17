//https://www.geeksforgeeks.org/problems/k-largest-elements4206/1



class Solution 
{
  public:
    vector<int> kLargest(vector<int>& arr, int k) 
    {
        vector<int> ans(k);
        priority_queue<int,vector<int>,greater<int> >pq;
        for(int it : arr) 
        {
            pq.push(it);
            if(pq.size() > k) pq.pop();
        }
        for(int i = k-1;i>=0;i--) 
        {
            ans[i] = pq.top();
            pq.pop();
        }
        return ans;
    }
};
