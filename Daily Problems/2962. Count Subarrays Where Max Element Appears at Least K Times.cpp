//https://leetcode.com/problems/count-subarrays-where-max-element-appears-at-least-k-times/description/?envType=daily-question&envId=2025-04-29



class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) 
    {
        int maxE = *max_element(begin(nums), end(nums));
        
        int n = nums.size();
        int i = 0, j = 0;
        
        long long result = 0;
        int countMax = 0;
        
        while(j < n) {
            if(nums[j] == maxE) {
                countMax++;
            }
            
            while(countMax >= k) {
                result += n-j;
                
                if(nums[i] == maxE) {
                    countMax--;
                }
                i++;
            }
            j++;
        }
        
        return result;
    }
};
