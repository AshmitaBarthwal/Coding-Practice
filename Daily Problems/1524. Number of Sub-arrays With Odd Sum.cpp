//https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/description/



class Solution {
public:
    int numOfSubarrays(vector<int>& arr) 
    {
        const int MOD = 1000000007;
        int oddCount = 0, evenCount = 1, prefixSum = 0, result = 0;

        for (int num : arr) 
        {
            prefixSum += num;

            if (prefixSum % 2 == 0) 
            {
                result = (result + oddCount) % MOD;
                evenCount++;
            } 
            else 
            {
                result = (result + evenCount) % MOD;
                oddCount++;
            }
        }
        return result;
    }
};
