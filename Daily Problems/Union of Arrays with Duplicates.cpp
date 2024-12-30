//https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1


class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) 
    {
        unordered_set<int>st;
        for(int &i:a){
            st.insert(i);
        }
        for(int &i:b){
            st.insert(i);
        }
        return st.size();
    }
};
