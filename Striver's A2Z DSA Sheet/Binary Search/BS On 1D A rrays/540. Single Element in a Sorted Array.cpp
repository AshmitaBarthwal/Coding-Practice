// https://leetcode.com/problems/single-element-in-a-sorted-array/description/


//Brute: Count each element, store the counts in a map, return the element with count == 1
//Time: Ordered Map -> O(nlogn), Unordered Map -> O(n) in best and O(n^2) in Worst
//Space: O(n)
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        unorderd_map<int, int> mp;
        for(int i=0;i<n;i++) mp[nums[i]]++;

        for(auto it : mp){
            if(it.second == 1) return it.first;
        }

        return -1;
    }
};


//Better: Comparing each element with its adjacent elements, 
//and if none of them are equal then that is the required element
//Time: O(n)
//Space: O(1)
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        for(int i=0;i<n;i++){
            if(i == 0 && nums[i] != nums[i+1]) return nums[i];
            else if(i == n-1 && nums[i] != nums[i-1]) return nums[i];
            else if(nums[i] != nums[i+1] && nums[i] != nums[i-1]) return nums[i];
        }
        return -1;
    }
};



//Optimal: Using Binary Search, for a mid element check if it's the required element
//else check if the single freq element is present in the left or right half
//Time: O(logn)
//Space: O(1)
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n-1] != nums[n-2]) return nums[n-1];

        int low = 1, high = n-2;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]) return nums[mid];
            else if((mid % 2 == 1 && nums[mid] == nums[mid-1]) 
                || (mid % 2 == 0 && nums[mid] == nums[mid+1])) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }
};
