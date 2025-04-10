//https://www.geeksforgeeks.org/problems/minimum-cost-to-connect-all-houses-in-a-city/1



class Solution 
{
  public:
    int minCost(vector<vector<int>>& houses) 
    {
        int n = houses.size();
        vector<bool> visited(n, false);
        int res = 0;
        int count = 0;

        // Min-heap: {cost, index}
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        pq.push({0, 0}); // Start from house 0

        while (count < n) 
        {
            pair<int, int> top = pq.top();
            pq.pop();

            int cost = top.first;
            int u = top.second;

            if (visited[u]) continue;

            visited[u] = true;
            res += cost;
            count++;

            for (int v = 0; v < n; ++v) 
            {
                if (!visited[v]) 
                {
                    int dist = abs(houses[u][0] - houses[v][0]) + abs(houses[u][1] - houses[v][1]);
                    pq.push({dist, v});
                }
            }
        }

        return res;
    }
};
