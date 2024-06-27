// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

//Approach 1: Set
//Time: O(nlogn)
//Space: O(n)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        set<int> unique;
        for(int i=0;i<n;i++) unique.insert(nums[i]);

        int i = 0;
        for(int num : unique){
            nums[i] = num;
            i++;
        }
        return unique.size();
    }
};


//Optimal: Two Pointers
//Time: O(n)
//Space: O(1)
int removeDuplicates(vector<int>& nums) {
    int i=0;
    for(int j=1;j<nums.size();j++)
    {
        if(nums[i]!=nums[j])
        {
            nums[i+1]=nums[j];
            i++;
        }
    }
    return i+1;
  }
