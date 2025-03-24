//https://leetcode.com/problems/count-days-without-meetings/description/?envType=daily-question&envId=2025-03-24



class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        // If there are no meetings, all days are available
        if (meetings.empty()) 
            return days;

        // Sort meetings by start time
        sort(meetings.begin(), meetings.end());

        // Merge overlapping intervals
        vector<pair<int, int>> mergedMeetings;
        int start = meetings[0][0];
        int end = meetings[0][1];

        for (int i = 1; i < meetings.size(); ++i) {
            if (meetings[i][0] <= end) {
                end = max(end, meetings[i][1]);
            } else {
                mergedMeetings.push_back({start, end});
                start = meetings[i][0];
                end = meetings[i][1];
            }
        }
        mergedMeetings.push_back({start, end});

        // Count available days
        int availableDays = 0;

        // Count days before the first meeting
        if (mergedMeetings[0].first > 1) {
            availableDays += mergedMeetings[0].first - 1;
        }

        // Count days between meetings
        for (int i = 1; i < mergedMeetings.size(); ++i) {
            availableDays += mergedMeetings[i].first - mergedMeetings[i - 1].second - 1;
        }

        // Count days after the last meeting
        if (mergedMeetings.back().second < days) {
            availableDays += days - mergedMeetings.back().second;
        }

        return availableDays;
    }
};
