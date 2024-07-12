// https://leetcode.com/problems/sum-of-beauty-of-all-substrings/description/


//Time: O(n^2)
//Space: O(n^2)
class Solution {
public:
    int beautySum(string s) {
        int result = 0;
        
        for (int i = 0; i < s.length(); i++) {
            map<char, int> mp;
            for (int j = i; j < s.length(); j++) {
                mp[s[j]]++;

                int smallest = INT_MAX, largest = INT_MIN;
                for (auto it : mp) {
                    smallest = min(smallest, it.second);
                    largest = max(largest, it.second);
                }
                result += largest - smallest;
            }
        }
        return result;
    }
};
