// https://www.geeksforgeeks.org/problems/two-numbers-with-odd-occurrences5846/1

//Time: O(n)
//Space: O(1)
class Solution{
    public:
    vector<long long int> twoOddNum(long long int arr[], long long int n)
    {
        long long int xr = 0;
        for(int i = 0; i < n; i++) xr ^= arr[i];
        long long int right = xr & ~(xr - 1);
        
        long long int b1 = 0, b2 = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] & right) b1 ^= arr[i];
            else b2 ^= arr[i];
        }
        
        if(b1 < b2) swap(b1, b2);
        return {b1, b2};
    }
};
