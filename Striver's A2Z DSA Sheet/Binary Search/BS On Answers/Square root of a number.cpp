// https://www.geeksforgeeks.org/problems/square-root/0


//Brute: Use Linear Search, for each element check if its square is == x
//Time: O(n)
//Space: O(1)
class Solution{
  public:
    long long int floorSqrt(long long int x){
        if(x <= 1) return x;
        long long result = -1;
        for(int i=1;i<x;i++){
            long long val = i*i;
            if(val <= x) result = i;
            else break;
        }   
        return result;
    }
};


//Better: Using built-in C++ function
//Time: O(n)
//Space: O(1)
class Solution{
  public:
    long long int floorSqrt(long long int x){
        return sqrt(x);   
    }
};


//Optimal: Using Binary search, check if square of mid is <x or >x and move low and high accordingly
//Time: O(logn)
//Space: O(1)
class Solution{
  public:
    long long int floorSqrt(long long int x){
        if(x <= 1) return x;
        long long result = 0;
        long long low = 0, high = x;
        while(low <= high){
            long long mid = low + (high - low)/2;
            long long pdt = mid * mid;
            
            if(pdt == x) return mid;
            else if(pdt > x) high = mid - 1;
            else low = mid + 1;
        }
        return high;
    }
};
