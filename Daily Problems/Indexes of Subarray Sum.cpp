//https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1



class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) 
    {
        int n = arr.size(), sum = 0, i = 0;

        for (int j = 0; j < n; ++j) 
        {
            sum += arr[j];
            while (sum > target && i <= j) 
            {
                sum -= arr[i];
                i++;
            }
            if (sum == target) 
            {
                return {i + 1, j + 1};
            }
    }

    return {-1};
    }
};
