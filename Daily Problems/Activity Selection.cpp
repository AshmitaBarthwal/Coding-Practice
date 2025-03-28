//https://www.geeksforgeeks.org/problems/activity-selection-1587115620/1



class Solution {
  public:
    int activitySelection(vector<int> &start, vector<int> &finish) {
        vector<pair<int, int>>v;
        int n=start.size();
        
        for(int i=0; i<n; i++){
            v.push_back({finish[i], i});
        }
        
        sort(v.begin(), v.end());
        
        int prevE=v[0].first;
        
        int cnt=1;
        
        for(int i=1; i<n; i++){
            int ind=v[i].second;
            
            if(start[ind]>prevE){
                prevE=finish[ind];
                cnt++;
            }
        }
        
        return cnt;
    }
};
