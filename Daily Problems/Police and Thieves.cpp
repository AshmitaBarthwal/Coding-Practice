//https://www.geeksforgeeks.org/problems/police-and-thieves--141631/1



class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) 
    {
        int n=arr.size(),t=0;
        int i=0,j=0,count=0;
        while(i<n && j<n){
            while(i<n && arr[i]!='P')i++;
            while(j<n && arr[j]!='T')j++;
            
            if(i<n && j<n && abs(i-j)<=k){
                count++;
                i++;
                j++;
            }
            else if(i<j)i++;
            else j++;
        }
        return count;
    }
};
