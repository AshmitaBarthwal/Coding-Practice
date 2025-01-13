//https://www.geeksforgeeks.org/problems/container-with-most-water0535/1


class Solution {
  public:
    int maxWater(vector<int> &arr) 
    {
        int l = 0, r = arr.size() - 1;
        int maxWater = 0;
    
        while (l < r) {
            int height = min(arr[l], arr[r]);
            int width = r - l;
            maxWater = max(maxWater, height * width);
    
            if (arr[l] < arr[r])
                l++;
            else
                r--;
        }
    
        return maxWater;
    }
};
