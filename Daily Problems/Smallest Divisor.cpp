//https://www.geeksforgeeks.org/problems/smallest-divisor/1



class Solution {
  public:
    int smallestDivisor(vector<int>& arr, int k) 
    {
        long sum=0;
        for(int item:arr) sum+=item;
        long left=1,right=Arrays.stream(arr).max().getAsInt();
        while(left<=right)
        {
            int mid=(int)(left+(right-left)/2);
            if(sum(arr,mid)<=k){
                right=mid-1;
            }
            else left=mid+1;
        }
        return (int)left;
        
        
    }
    public long sum(int [] arr,int k)
    {
        long sum=0l;
        for(int item:arr)
        {
            sum+=Math.ceil((double)item/k);
        }
        return sum;
    }
};
