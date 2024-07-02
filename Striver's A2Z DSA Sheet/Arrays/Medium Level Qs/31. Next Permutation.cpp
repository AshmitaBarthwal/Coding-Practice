// https://leetcode.com/problems/next-permutation/description/

//Better: Using the built in function of C++ next_permutation()
//Time: O(n)
//Space: O(1)
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(), nums.end());
    }
};


//Optimal: Traverse from the end find the break point where nums[i] < nums[i-1]
//traverse from back again and find the element nums[j] just greater than nums[i-1]
//swap nums[i-1] & nums[j], reverse the array from i+1 to the end
//Time: O(n)
//Space: O(1)
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        int i = n-1;
        while(i>0 && nums[i] <= nums[i-1]) i--;

        if(i > 0){
            int j = n-1;
            while(nums[j] <= nums[i-1]) j--;
            swap(nums[i-1], nums[j]);
            reverse(nums.begin() + i, nums.end());
        }else sort(nums.begin(), nums.end());

    }
};
