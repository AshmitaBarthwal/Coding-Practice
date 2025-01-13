//https://www.geeksforgeeks.org/problems/equilibrium-point-1587115620/1


class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) 
    {
        int n=arr.size();
        int sum=0;
        int prefixSum=0;
        
        for (auto i:arr){
            prefixSum+=i;
        }
        for (int i=0;i<n;i++){
            sum+=arr[i];
            if (sum==prefixSum){
                return i;
            }
            prefixSum-=arr[i];
        }
        return -1;
    }
};
