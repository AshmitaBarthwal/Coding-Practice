//https://www.geeksforgeeks.org/problems/k-closest-elements3619/1



class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int k, int x) 
    {
         priority_queue<pair<int, int>> maxHeap;
        
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == x) continue;
            int diff = abs(arr[i] - x);
            maxHeap.push({diff, arr[i]});
            if (maxHeap.size() > k) {
                maxHeap.pop();
            }
        }
        
        vector<int> result;
        while (!maxHeap.empty()) {
            result.push_back(maxHeap.top().second);
            maxHeap.pop();
        }

        sort(result.begin(), result.end(), [&](int a, int b) {
            int da = abs(a - x), db = abs(b - x);
            if (da == db) return a > b;
            return da < db;
        });

        return result;
    }
    
};
