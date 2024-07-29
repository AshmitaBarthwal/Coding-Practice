// https://leetcode.com/problems/kth-missing-positive-number/description/



//Brute: Iterate, if arr[i] <= k, k++ else break
//Time: O(n)
//Space: O(1)
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i] <= k) k++;
            else break;
        }
        return k;
    }
};


//Better: Using Binary Search
//Time: O(log n)
//Space: O(1)
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int low = 0, high = n-1;

        while(low <= high){
            int mid = low + (high - low)/2;
            int mis = arr[mid] - (mid + 1);
            
            if(mis < k) low = mid + 1;
            else high = mid - 1;
        }

        return low + k;
    }
};
