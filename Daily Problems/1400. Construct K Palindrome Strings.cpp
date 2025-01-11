//https://leetcode.com/problems/construct-k-palindrome-strings/description/



class Solution {
public:
    bool canConstruct(string s, int k) 
    {
        if (k > s.size()) 
            return false; 
        
        vector<int> charCount(26, 0);
        for (char c : s) {
            charCount[c - 'a']++;
        }
        
        int oddCount = 0;
        for (int count : charCount) {
            if (count % 2 != 0) 
                oddCount++;
        }
        
        return oddCount <= k;
    }
};
