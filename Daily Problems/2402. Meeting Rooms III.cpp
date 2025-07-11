//https://leetcode.com/problems/meeting-rooms-iii/description/?envType=daily-question&envId=2025-07-11



class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) 
    {
        vector<int>cnt(n, 0);
        priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>>pq;
        priority_queue<long long, vector<long long>, greater<long long>>room;
        for(int i = 0; i < n; i++)
        room.push(i);

        sort(meetings.begin(), meetings.end());
        
        for(long long i = 0; i < meetings.size(); i++)
        {
            long long s = meetings[i][0];
            long long e = meetings[i][1];

            while(!pq.empty() && pq.top().first <= s)
            {
                room.push(pq.top().second);
                pq.pop();
            }
            
            
            if(!room.empty())
            {
                cnt[room.top()]++;
                pq.push({e, room.top()});
                room.pop();
            }

            else
            {
                long long delay = pq.top().first - s;
                
                long long r = pq.top().second;
                cnt[r]++;
                pq.pop();
                pq.push({e + delay, r});
            }        
        }
        int ans = 0;
        int val = 0;

        for(int i = 0; i < cnt.size(); i++)
        {
            if(cnt[i] > val)
            {
                val = cnt[i];
                ans = i;
            }
        }
        return ans;
    }
};
