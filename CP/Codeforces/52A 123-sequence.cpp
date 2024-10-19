//https://codeforces.com/contest/52/problem/A


#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    
    map<int, int> mp;
    
    for (int i = 0; i < n; i++) 
    {
        mp[arr[i]]++;
    }
    
    int maxi = 0;
    
    for (auto it : mp) 
    {
        maxi = max(maxi, it.second);
    }
    
    cout << n - maxi << endl;
 
    return 0;
}
