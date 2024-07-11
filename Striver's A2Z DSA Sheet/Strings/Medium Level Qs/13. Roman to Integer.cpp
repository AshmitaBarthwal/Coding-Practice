// https://leetcode.com/problems/roman-to-integer/description/

//Time: O(n)
//Space: O(n)
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp;
        
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        int result = 0;
        for(size_t i=0;i<s.length();i++){
            if (i == s.length() - 1) {
                result += mp[s[i]];
                return result;
            }

            if(mp[s[i]] >= mp[s[i+1]]) result += mp[s[i]];
            else{
                result += mp[s[i+1]] - mp[s[i]];
                i++;
            }
        }

        return result;
    }
};
