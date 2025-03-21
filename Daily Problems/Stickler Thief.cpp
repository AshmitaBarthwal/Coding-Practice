//https://www.geeksforgeeks.org/problems/stickler-theif-1587115621/1


class Solution {
  public:
    int findMaxSum(vector<int>& arr) 
    {
        int n=arr.size();
        int maxi=INT_MIN;
        int sum1=0;
        int sum2=0;
        for(int i=0;i<n;i++){
            sum1=sum1+arr[2*i];
            sum2=sum2+arr[(2*i)+1];
            
        }
        maxi=max(sum1,sum2);
        return maxi;
    }
};
