//https://leetcode.com/problems/length-of-longest-fibonacci-subsequence/description/



class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) 
    {
        int n = arr.size();
        unordered_set<int> st;
        for(int& i: arr)
        {
            st.insert(i);
        }
        int ans = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int curr = arr[j];
                int next = arr[i] + arr[j];
                int len = 2;

                while(st.find(next) != st.end()){
                    int temp = curr;
                    curr = next;
                    next += temp;
                    len++;
                    ans = max(ans, len);
                }
            }
        }
        return ans;
    }
};
