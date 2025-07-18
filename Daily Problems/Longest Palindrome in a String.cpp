//https://www.geeksforgeeks.org/problems/longest-palindrome-in-a-string3411/1



class Solution {
  public:
    string longestPalindrome(string &s) 
    {
        int start = 0, end = 0;
        int low,high;
        for(int i = 0; i < s.length(); i++){
            // odd part
             low = i - 1;
             high = i;
            while(low>=0 && high<s.length() && s[low] == s[high]){
                
                if(high - low + 1 > end){
                    end = high - low + 1; //current longest pallindrome length
                    start = low;
                }
                low--;
                high++;
            }
            // Even part
             low = i - 1;
             high = i + 1;
            while(low>=0 && high<s.length() && s[low] == s[high]){
                
                if(high - low + 1 > end){
                    end = high - low + 1; //current longest pallindrome length
                    start = low;
                }
                low--;
                high++;
            }
            
        }
        if(end == 0)return s.substr(start,1); // no pallindrome at all
        return s.substr(start,end);
    }
};
