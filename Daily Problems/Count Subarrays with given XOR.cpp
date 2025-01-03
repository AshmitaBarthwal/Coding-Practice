//https://www.geeksforgeeks.org/problems/count-subarray-with-given-xor/1


class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) 
    {
        int n=arr.size(); 
        unordered_map<int, int> m;
        int sum = 0;
        int ans = 0;
        m[0] = 1;
        for (int i = 0; i < n; i++) 
        {
            sum ^= arr[i];
            int val = sum^k;
            if (m.find(val) != m.end()) 
            {
                ans += m[val];
            }
            m[sum]++;
        }
        return ans;
    }
};
