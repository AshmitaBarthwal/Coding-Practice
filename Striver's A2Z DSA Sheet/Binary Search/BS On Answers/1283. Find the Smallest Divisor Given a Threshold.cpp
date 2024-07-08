// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/


//Brute: Check for each element if its a divisor or not
//Time: O(n * max(arr))
//Space: O(1)
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        for(int i=low;i<=high;i++){
            int sum = 0;
            for(int j=0;j<n;j++){
                sum += ceil(static_cast<double>(nums[j])/i);
            }
            if(sum <= threshold) return i;
        }

        return -1;
    }
};



//Better: Use Binary Search, check for mid if the threshold is possible or not
//if sum <= threshold then move high else move low
//Time: O(n * log(max(arr)))
//Space: O(1)
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        int divisor = -1;
        while(low <= high){
            int mid = low + (high - low)/2;
            int sum = 0;

            for(int j=0;j<n;j++){
                sum += ceil(static_cast<double>(nums[j])/mid);
            }

            if(sum <= threshold){
                divisor = mid;
                high = mid - 1;
            }else low = mid + 1;
        }

        return divisor;
    }
};
