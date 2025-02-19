//https://leetcode.com/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n/description/


class Solution {
public:
    vector<char> vct = {'a' , 'b' , 'c'};
    int target = 0;
    int counter = 0;
    string ans = "";
    bool flag = false;
    

    void recur(int n , string& curr)
    {
        if(flag)
        {
            return;
        }

        if(n == 0)
        {
            ans = curr;
            counter++;
            if(counter == target)
            {
                flag = true;
            }
            return;
        }

        for(int i = 0 ; i < 3 ; i++)
        {
            if(curr == "" || curr.back() != vct[i])
            {
                curr += vct[i];
                recur(n-1 , curr);
                curr.pop_back();
            }
        }

        return;
    }

public:
    string getHappyString(int n, int k) 
    {
        target = k;
        ans = "";
        counter = 0;
        flag = false;
        string curr = "";
        recur(n , curr);
        if(flag == false)
        {
            return "";
        }

        return ans;
    }
};
