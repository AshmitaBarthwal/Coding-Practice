//https://www.geeksforgeeks.org/problems/decode-the-string2444/1



class Solution {
  public:
    string decodedString(string &s) 
    {
        int i = 0; 
        return decodeHelper(s, i);
    }

    string decodeHelper(string &s, int &i) {
        string result = "";
        while (i < s.size() && s[i] != ']') {
            if (isdigit(s[i])) {
                int num = 0;
                while (isdigit(s[i]))  
                    num = num * 10 + (s[i++] - '0');  
                i++;  
                string decoded = decodeHelper(s, i);
                i++;  
                while (num--) result += decoded;
            } 
            else {
                result += s[i++];
            }
        }
        return result;
    }
};
