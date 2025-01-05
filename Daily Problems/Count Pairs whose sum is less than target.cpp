//https://www.geeksforgeeks.org/problems/count-pairs-whose-sum-is-less-than-target/1


class Solution {
  public:
    int countPairs(vector<int> &arr, int target) 
    {
        sort(arr.begin(),arr.end());
        int c = 0;
        int n = arr.size();
        int i=0;
        int j=n-1;
        
        while(i<j)
        {
            if(arr[i]+arr[j]<target)
            {
                c+=j-i;
                i++;
            }
            else
            {
                j--;
            }
        }
        return c;
    }
};
