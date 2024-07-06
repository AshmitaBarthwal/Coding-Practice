// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/


//Brute: Sort the array and return the first element
//Time: O(nlogn)
//Space: O(1)
class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[0];
    }
};


//Better: Use C++ built-in function to find minimum element (1 Line Code)
//Time: O(n)
//Space: O(1)
class Solution {
public:
    int findMin(vector<int>& nums) {
        return *min_element(nums.begin(), nums.end());
    }
};


//Better: Using Linear Search 
//Time: O(n)
//Space: O(1)
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size(), smallest = INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i] < smallest) smallest = nums[i];
        }
        return smallest;
    }
};


//Optimal: Using Binary Search
//Time: O(logn)
//Space: O(1)
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size(), smallest = INT_MAX;
        int left = 0, right = n - 1;
        while(left <= right){
            int mid = left + (right - left)/2;
            if(nums[right] <= nums[mid]){
                smallest = min(smallest, nums[right]);
                left = mid+1;
            }else{
                smallest = min(smallest, nums[mid]);
                right = mid - 1;
            }
        }
        return smallest;
    }
};
