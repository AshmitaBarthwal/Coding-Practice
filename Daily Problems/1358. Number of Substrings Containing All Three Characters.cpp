//https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/description/?envType=daily-question&envId=2025-03-11



class Solution {
public:
    int numberOfSubstrings(string s) 
    {
        int count = 0;
        int left = 0;
        unordered_map<char, int> mp = {{'a', 0}, {'b', 0}, {'c', 0}};

        for (int right = 0; right < s.length(); ++right) {
            mp[s[right]]++;

            while (mp['a'] > 0 && mp['b'] > 0 && mp['c'] > 0) {
                count += s.length() - right;
                mp[s[left]]--;
                left++;
            }
        }

        return count;
    }
};
