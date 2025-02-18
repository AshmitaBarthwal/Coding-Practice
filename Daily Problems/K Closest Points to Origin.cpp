//https://www.geeksforgeeks.org/problems/k-closest-points-to-origin--172242/1



class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        // Max heap to store {distance, point}
        priority_queue<pair<int, vector<int>>> maxHeap;

        for (auto& p : points) {
            int dist = p[0] * p[0] + p[1] * p[1]; // Compute squared distance
            maxHeap.push({dist, p}); // Insert point into heap

            if (maxHeap.size() > k) 
                maxHeap.pop(); // Remove farthest point
        }
        
        // Extract k closest points from heap
        vector<vector<int>> res;
        while (!maxHeap.empty()) {
            res.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return res;
    }
};
