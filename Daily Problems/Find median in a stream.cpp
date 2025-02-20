//https://www.geeksforgeeks.org/problems/find-median-in-a-stream-1587115620/1



class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) 
    {
        priority_queue<int> maxHeap; // Max heap 
        priority_queue<int, vector<int>, greater<int>> minHeap; // Min heap
        vector<double> result;

        for (int num : arr) 
        {
            // Insert into maxHeap first
            maxHeap.push(num);

            // Balance: Move largest from maxHeap to minHeap
            minHeap.push(maxHeap.top());
            maxHeap.pop();

            // Ensure maxHeap has equal/more elements than minHeap
            if (maxHeap.size() < minHeap.size()) 
            {
                maxHeap.push(minHeap.top());
                minHeap.pop();
            }

            // Compute median
            if (maxHeap.size() > minHeap.size()) 
                result.push_back(maxHeap.top());
            else 
                result.push_back((maxHeap.top() + minHeap.top()) / 2.0);
        }
        return result;
    }
};
