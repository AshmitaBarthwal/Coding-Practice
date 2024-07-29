// https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/


//Brute: Using Linear Search check if making boquets is possible in days starting from min_element -> max_element
//Time: O(n * max(arr[])-min(arr[])+1)
//Space: O(1)
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if(n < m*k) return -1;
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        
        for(int i=low;i<=high;i++){
            int adj = 0, count = 0;
            for(int j=0;j<n;j++){
                if(bloomDay[j] <= i) adj++;
                else if(bloomDay[j] > i) adj=0;
                if(adj == k){
                    count++;
                    adj=0;
                }
            }
            if(count >= m) return i;
        }

        return -1;
    }
};



//Better: Using Binary Search, take low = min_element, high = max_element
//run a loop to check mid with the elements in the array if they form required no of boquets or not
//Time: O(n * log(max(arr[])-min(arr[])+1))
//Space: O(1)
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if(n < static_cast<long long>(m)*k) return -1;
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        int minDays = INT_MAX;
        while(low <= high){
            int mid = low + (high - low)/2;
            int adj = 0, count = 0;

            for(int j=0;j<n;j++){
                if(bloomDay[j] <= mid) adj++;
                else if(bloomDay[j] > mid) adj=0;
                if(adj == k){
                    count++;
                    adj=0;
                }
            }

            if(count >= m){
                minDays = min(minDays, mid);
                high = mid - 1;
            }else low = mid + 1;
        }

        return (minDays == INT_MAX) ? -1 : minDays;
    }
};
