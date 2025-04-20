//https://www.geeksforgeeks.org/problems/find-repetitive-element-from-1-to-n-1/1



// User function Template for C++
class Solution {
  public:
    int findDuplicate(vector<int>& arr) 
    {
        int i = 0;
        while (i < arr.size())
        {
            int corr_Pos = arr[i] - 1;
            if (arr[i] != arr[corr_Pos])
            {
                int temp = arr[i];
                arr[i] = arr[corr_Pos];
                arr[corr_Pos] = temp;
            }
            else
                i += 1;
        }

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] != i + 1)
                return arr[i];
        }
        return -1;
        
    }
};
