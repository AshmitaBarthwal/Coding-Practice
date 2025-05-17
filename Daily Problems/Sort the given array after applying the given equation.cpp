//https://www.geeksforgeeks.org/problems/sort-the-given-array-after-applying-the-given-equation0304/1



class Solution {
  public:
    vector<int> sortArray(vector<int> &arr, int A, int B, int C) 
    {
         int n=arr.size();
        for(int i=0; i<n; i++)
        {
            int x=arr[i];
            arr[i]=(A*x*x+B*x+C);
        }
        sort(arr.begin(), arr.end());
        return arr;
    }
};
