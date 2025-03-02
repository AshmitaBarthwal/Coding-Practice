//https://www.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1



class Solution 
{
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) 
    {
        vector<int> res;
        deque<int> dq;

        for (int i = 0; i < arr.size(); i++) {
            if (!dq.empty() && dq.front() == i - k) dq.pop_front();

            while (!dq.empty() && arr[dq.back()] <= arr[i]) dq.pop_back();

            dq.push_back(i);

            if (i >= k - 1) res.push_back(arr[dq.front()]);
        }
        return res;
    }
};
