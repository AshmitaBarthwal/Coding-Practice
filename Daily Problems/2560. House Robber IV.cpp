//https://leetcode.com/problems/house-robber-iv/description/?envType=daily-question&envId=2025-03-15



class Solution {
public:
bool canSteal(const vector<int>& nums, int k, int capability) {
        int count = 0;
        int i = 0;
        while (i < nums.size()) {
            if (nums[i] <= capability) {
                count++;
                i += 2; 
            } else {
                i++;
            }
        }
        return count >= k;
    }
    
    int minCapability(vector<int>& nums, int k) {
        int l = *min_element(nums.begin(), nums.end());
        int r = *max_element(nums.begin(), nums.end());
        
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (canSteal(nums, k, mid)) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        
        return l;  
    }
};
