//https://www.geeksforgeeks.org/problems/pair-in-array-whose-sum-is-closest-to-x1124/1


class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) 
    {
        int n = arr.size() ;
        int minDiff = INT_MAX , maxAbs = -1 ;
        int ele1 = -1 , ele2 = -1 ;
        int low = 0 , high = n - 1 ;
        
        sort(arr.begin() , arr.end()) ;
        
        while(low < high) {
            
            int sum = arr[low] + arr[high] ;
            int diff = abs(target - sum) ;
            int absDiff = arr[high] - arr[low] ;
            
            if(diff < minDiff) {
                minDiff = diff ;
                ele1 = arr[low] ;
                ele2 = arr[high] ;
                maxAbs = absDiff ;
            }
            else if(diff == minDiff && absDiff > maxAbs) {
                maxAbs = absDiff ;
                ele1 = arr[low] ;
                ele2 = arr[high] ;
            }
            
            if(sum == target) break ;
            else if(sum < target) ++low ;
            else --high ;
            
        }
        
        if(ele1 == -1) return {} ;
        return {ele1 , ele2} ;
    }
};
