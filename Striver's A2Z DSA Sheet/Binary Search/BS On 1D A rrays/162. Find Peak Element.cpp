// https://leetcode.com/problems/find-peak-element/description/

//Brute
//Time: O(n)
//Space: O(1)
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1 || nums[0] > nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;
        for(int i=1;i<n-1;i++){
            if(nums[i] > nums[i+1] && nums[i] > nums[i-1]) return i;
        }
        return -1;
    }
};


//Better: Using Binary Search
//Time: O(logn)
//Space: O(1)
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1 || nums[0] > nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;

        int low = 1, high = n-2;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1]) return mid;
            else if(nums[mid] < nums[mid+1]) low = low + 1;
            else high = mid - 1;
        }

        return -1;
    }
};
