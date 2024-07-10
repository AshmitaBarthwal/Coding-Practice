// https://leetcode.com/problems/koko-eating-bananas/description/


//Brute: For i:1->maxPiles check which will be the smallest integer where kok can eat all the bananas in given hours
//Time: O(m*n), m->maxPiles
//Space: O(1)
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size(), mx = *max_element(piles.begin(), piles.end());
        for(int i=1;i<=mx;i++){
            long long sum = 0;
            for(int j=0;j<n;j++){
                sum += (piles[j]) / i;
                if(piles[j] % i > 0) sum++;
            }
            if(sum <= h) return i;
        }
        return mx;
    }
};



//Better: Using Binary Search, check if for mid condition is satisfied, then try for a smaller number
//if it's not satisfied by mid then, try for a larger number
//Time: O(nlogm)
//Space: O(1)
class Solution {
public:

    bool check(int mid, vector<int>& piles, int h){
        int n = piles.size();
        long long sum = 0;
        for(int i=0;i<n;i++){
            sum += piles[i] / mid;
            if(piles[i] % mid > 0) sum++;
            if(sum > h) return false;
        }
        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size(), mx = *max_element(piles.begin(), piles.end());
        int low = 1, high = mx;
        int result = 0;

        while(low <= high){
            int mid = (high + low)/2;
            if(check(mid, piles, h)){
                result = mid;
                high = mid - 1;
            }else low = mid + 1;
           
        }
        return result;
    }
};
