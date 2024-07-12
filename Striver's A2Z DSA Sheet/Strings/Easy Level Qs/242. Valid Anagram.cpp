// https://leetcode.com/problems/valid-anagram/description/

//Time: O(n)
//Space: O(1)

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        unordered_map<char, int> charCount;

        for (char c : s) {
            charCount[c]++;
        }

        for (char c : t) {
            charCount[c]--;
            if (charCount[c] < 0) {
                return false;
            }
        }

        return true;
    }
};
