// https://www.geeksforgeeks.org/problems/key-pair5616/1


class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) 
    {
        unordered_map<int,int> mp;
        int n = arr.size();
        for(int i=0; i<n; i++)
        {
            if(arr[i] <= target)
            {
                 if(mp[arr[i]] == 1)
                {
                    return true;
                }
                else
                {
                    mp[target-arr[i]] = 1;
                }
            }
        }
        return false;
    }
};
