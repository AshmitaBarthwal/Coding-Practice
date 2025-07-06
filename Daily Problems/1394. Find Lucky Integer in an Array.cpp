//https://leetcode.com/problems/find-lucky-integer-in-an-array/description/?envType=daily-question&envId=2025-07-05




class Solution {
public:
    int findLucky(vector<int>& arr) 
    {
        unordered_map<int, int> freq;

        for (int num : arr) {
            freq[num]++;
        }

        int lucky = -1;

        for (auto& [key, value] : freq) {
            if (key == value) {
                lucky = max(lucky, key);
            }
        }

        return lucky;
    }
};
