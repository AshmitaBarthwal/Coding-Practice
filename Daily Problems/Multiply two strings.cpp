//https://www.geeksforgeeks.org/problems/multiply-two-strings/1



class Solution {
  public:
    /*You are required to complete below function */
    string multiplyStrings(string& s1, string& s2) 
    {
         bool neg = false;
        if (s1[0] == '-') 
        {
            neg = !neg;
            s1 = s1.substr(1);
        }
        if (s2[0] == '-') {
            neg = !neg;
            s2 = s2.substr(1);
        }
        while (s1.size() > 1 && s1[0] == '0') s1.erase(s1.begin());
        while (s2.size() > 1 && s2[0] == '0') s2.erase(s2.begin());
        if (s1 == "0" || s2 == "0") return "0";
        int n = s1.size(), m = s2.size();
        vector<int> res(n + m, 0);
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int mul = (s1[i] - '0') * (s2[j] - '0');
                int sum = mul + res[i + j + 1];
                res[i + j] += sum / 10;
                res[i + j + 1] = sum % 10;
            }
        }
        string ans;
        int i = 0;
        while (i < res.size() && res[i] == 0) i++;
        for (; i < res.size(); i++) ans.push_back(res[i] + '0');
        if (neg) ans = "-" + ans;
        return ans;
    }
};
