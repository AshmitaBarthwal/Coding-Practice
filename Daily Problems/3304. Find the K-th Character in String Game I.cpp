//https://leetcode.com/problems/find-the-k-th-character-in-string-game-i/description/?envType=daily-question&envId=2025-07-03



class Solution 
{
public:
    char kthCharacter(int k) 
    {
        string sb = "a";
        while (sb.length() < k) 
        {
            int size = sb.length();
            for (int i = 0; i < size; ++i) 
            {
                char nextChar = 'a' + ((sb[i] - 'a' + 1) % 26);
                sb += nextChar;
            }
        }
        return sb[k - 1];
    }
};
