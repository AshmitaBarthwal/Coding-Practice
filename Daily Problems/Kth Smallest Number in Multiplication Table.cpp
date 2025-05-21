//https://www.geeksforgeeks.org/problems/kth-smallest-number-in-multiplication-table/1



class Solution {
  public:
    int kthSmallest(int m, int n, int k) {
        int low = 1;
        int high = m*n;
        int ans = -1;
        
        while (low<=high) {
            int mid = (low+high)/2;
            int count = smallerThan(m, n, mid);
            if (count < k) {
                low = mid+1;
            } else if (count >= k) {
                high = mid-1;
                ans = mid;
            }
        }
        return ans;
    }
    
    public int smallerThan(int m, int n, int mid) {
        int count = 0;
        for (int i=1; i<=m; i++) {
            int j = Math.min(mid/i, n);
            count += j;
        }
        return count;
    }
};
