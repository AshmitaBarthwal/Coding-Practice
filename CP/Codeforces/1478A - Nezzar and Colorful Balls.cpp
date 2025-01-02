//https://codeforces.com/problemset/problem/1478/A


#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++) 
       {
            freq[a[i]]++;
        }

        int max_freq = 0;
        for (auto& entry : freq) 
       {
            max_freq = max(max_freq, entry.second);
        }

        cout << max_freq << endl;
    }
    return 0;
}
