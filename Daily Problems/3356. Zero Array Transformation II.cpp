//https://leetcode.com/problems/zero-array-transformation-ii/description/?envType=daily-question&envId=2025-03-13



class Solution {
public:
    int n;
    int Q;

    bool checkWithDifferenceArrayTeq(vector<int>& nums, vector<vector<int>>& queries, int k) {
        vector<int> diff(n, 0);

        //O(Q)
        for(int i = 0; i <= k; i++) {
            int l = queries[i][0];
            int r   = queries[i][1];
            int x     = queries[i][2];

            diff[l] += x;
            if(r+1 < n)
                diff[r+1] -= x;
        }

        int cumSum = 0;
        //O(n)
        for(int i = 0; i < n; i++) {
            cumSum += diff[i];

            diff[i] = cumSum;

            if(nums[i] - diff[i] > 0) { //nums[i] 0 nahi ban paya
                return false;
            }
        }

        return true;

    }

    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        n = nums.size();
        Q = queries.size();

        auto lambda = [](int x) {
            return x == 0;
        };

        if(all_of(begin(nums), end(nums), lambda)) {
            return 0; //no query required because all are already zero
        }

        for(int i = 0; i < Q; i++) { //O(Q * (Q + n))
            if(checkWithDifferenceArrayTeq(nums, queries, i) == true) {
                return i+1;
            }
        }

        return -1;
    }
};
