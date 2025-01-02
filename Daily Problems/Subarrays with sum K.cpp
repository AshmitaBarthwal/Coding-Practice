//https://www.geeksforgeeks.org/problems/subarrays-with-sum-k/1


class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) 
    {
            unordered_map<int, int> prefix_sum_count;
            int current_sum = 0, count = 0;
            prefix_sum_count[0] = 1;
        
            for (int num : arr) {
                current_sum += num;
                if (prefix_sum_count.find(current_sum - k) != prefix_sum_count.end()) {
                    count += prefix_sum_count[current_sum - k];
                }
                prefix_sum_count[current_sum]++;
            }
            return count;
    }
};
