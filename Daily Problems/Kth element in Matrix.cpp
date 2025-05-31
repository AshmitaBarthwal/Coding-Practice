//https://www.geeksforgeeks.org/problems/kth-element-in-matrix/1



class Solution {
  public:
    int kthSmallest(vector<vector<int>> &matrix, int k) {
         priority_queue<int>pq;
        for(auto x:matrix){
            for(auto y:x){
                pq.push(y);
                if(pq.size()>k)pq.pop();
            }
        }
        return pq.top();
    }
};
