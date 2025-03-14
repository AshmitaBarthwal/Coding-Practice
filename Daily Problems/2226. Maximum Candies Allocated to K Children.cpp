//https://leetcode.com/problems/maximum-candies-allocated-to-k-children/description/?envType=daily-question&envId=2025-03-14



class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) 
    {
        int n = candies.size();

        int maxC = 0;
        int total = 0;
        for(int i = 0; i < n; i++) {
            total += candies[i];
            maxC = max(maxC, candies[i]);
        }

        if(total < k) {
            return 0;
        }


        //Brute force try from maxC till 1
        for(int c = maxC; c >= 1; c--) {
            long long count = 0;

            for(int i = 0; i < candies.size(); i++) {
                count += candies[i]/c; //how many children can get c candies from this pile
            }
            if(count >= k) {
                return c;
            }
        }

        return 0;
    }
};
