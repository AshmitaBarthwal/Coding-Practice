// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/


//Brute: Using Linear Search
//Time: O(n * sum(arr)-max(arr))
//Space: O(1)
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        for(int i=low;i<=high;i++){
            long long sum = 0;
            int num = 1;
            for(int j=0;j<n;j++){
                if(sum + weights[j] > i){
                    sum = 0;
                    num++;
                }
                sum += weights[j];
            }
            if(num <= days) return i;
        }

        return -1;
    }
};



//Better: Using Binary Search
//Time: O(n * log(sum(arr)-max(arr))
//Space: O(1)
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        int req = -1;
        while(low <= high){
            int mid = low + (high - low)/2;
            long long sum = 0;
            int num = 1;
            for(int j=0;j<n;j++){
                if(sum + weights[j] > mid){
                    sum = 0;
                    num++;
                }
                sum += weights[j];
            }

            if(num <= days){
                req = mid;
                high = mid - 1;
            }else low = mid + 1;
        }

        return req;
    }
};
