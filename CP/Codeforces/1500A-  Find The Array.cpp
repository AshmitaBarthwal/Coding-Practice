// https://codeforces.com/problemset/problem/1550/A


#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) 
   {
        int s;
        cin >> s;
        int c = 0, i = 1;
        while (s > 0) 
      {
            c++;
            s -= i;
            i += 2;
        }
        cout << c << endl;
    }
    return 0;
}
