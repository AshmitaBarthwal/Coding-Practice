//https://www.geeksforgeeks.org/problems/multiply-two-strings/1



class Solution {
  public:
    /*You are required to complete below function */
    string multiplyStrings(string& s1, string& s2) 
    {
        if (s1 == "0" || s2 == "0") return "0";
        
        int m = s1.size(), n = s2.size();
        vector<int> result(m + n, 0);
        
        // Multiply each digit from s1 with each digit from s2
        for (int i = m - 1; i >= 0; --i) 
        {
            for (int j = n - 1; j >= 0; --j) 
            {
                int mul = (s1[i] - '0') * (s2[j] - '0');
                int sum = mul + result[i + j + 1];
                
                result[i + j + 1] = sum % 10; // store single digit
                result[i + j] += sum / 10;   // carry to next higher place
            }
        }
        
        // Convert result vector to string
        string res = "";
        for (int i = 0; i < result.size(); ++i) 
        {
            if (!(res.empty() && result[i] == 0)) 
            {
                res.push_back(result[i] + '0');
            }
        }
        
        return res;
    }
};
