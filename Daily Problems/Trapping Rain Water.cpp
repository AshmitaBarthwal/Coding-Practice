//https://www.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1


class Solution {
  public:
    int maxWater(vector<int> &arr) 
    {
       int n=arr.size();
       int left = 0;
       int right = n - 1;
       int left_max = 0;
       int  right_max = 0;
       int  water = 0;

        while(left <= right)
        {
            if(arr[left] <= arr[right])
            {
                if (arr[left] > left_max)
                {
                    left_max = arr[left];
                }
               
                else
                {
                    water += left_max - arr[left];
                }
                left += 1;
            }
            else
             {
                if(arr[right] > right_max)
                {
                    right_max = arr[right];
                }
                else
                {
                  
                    water += right_max - arr[right];
                }
                right -= 1;
             }
           }
        return water;
    }
};
