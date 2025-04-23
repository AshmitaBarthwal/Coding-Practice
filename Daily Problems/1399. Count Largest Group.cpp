//https://leetcode.com/problems/count-largest-group/description/?envType=daily-question&envId=2025-04-23



class Solution {
public:
    int countLargestGroup(int n) 
    {
        unordered_map<int, int> mp; // digit sum -> count
        for (int i = 1; i <= n; ++i) {
            int sum = digitSum(i);
            mp[sum]++;
        }

        int maxSize = 0, count = 0;
        for (auto &[k, v] : mp) {
            if (v > maxSize) {
                maxSize = v;
                count = 1;
            } else if (v == maxSize) {
                count++;
            }
        }

        return count;
    }

    int digitSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
    
};
