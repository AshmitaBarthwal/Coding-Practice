//https://www.geeksforgeeks.org/problems/smallest-divisor/1



class Solution {
public:
    int maxDiff(int num) {
        string s=to_string(num);
        string a=s, b=s;
        for(char c : s) {
            if (c!='9') {
                replace(a.begin(), a.end(), c, '9');
                break;
            }
        }
        if(s[0]!='1') {
            replace(b.begin(), b.end(), s[0], '1');
        } else {
            for(int i=1; i<s.size(); ++i) {
                if (s[i]!='0' && s[i]!='1') {
                    replace(b.begin(), b.end(), s[i], '0');
                    break;
                }
            }
        }
        return stoi(a)-stoi(b);
    }
};class Solution {
  public:
    int smallestDivisor(vector<int>& arr, int k) 
    {
        int n = arr.size();
        int low = 1;
        int maxE = *max_element(arr.begin(), arr.end());
        int high = maxE + k;
        int ans = high;
        while(low <= high){
            int mid = low + (high - low)/2;
            int count = 0;
            for(auto &e : arr){
                count += ceil((double)e/mid);
            }
            if(count <= k){
                ans = min(mid, ans);
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
};
