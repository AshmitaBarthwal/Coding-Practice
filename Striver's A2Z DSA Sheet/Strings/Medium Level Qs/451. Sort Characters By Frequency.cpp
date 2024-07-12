// https://leetcode.com/problems/sort-characters-by-frequency/description/


//Time: O(n + mlogm)
//Space: O(n + mlogm)
class Solution {
public:
    string frequencySort(string s) {
        int n = s.length();
        map<char, int> mp;
        
        for(int i=0;i<n;i++) mp[s[i]]++;

        vector<pair<int, char>> temp;
        for(auto it : mp) temp.push_back({it.second, it.first});
        sort(temp.begin(), temp.end(), greater<pair<int, char>>());

        string result = "";
        for(auto it : temp){
            int freq = it.first;
            char alpha = it.second;
            while(freq--) result += alpha;
        }

        return result;
    }
};
