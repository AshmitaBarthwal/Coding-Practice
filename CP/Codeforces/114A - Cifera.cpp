//https://codeforces.com/problemset/problem/114/A


#include <iostream>
using namespace std;
int main() 
{
    long long k, l;
    cin >> k >> l;
    int imp = 0;
    while (l % k == 0) 
    {
        l /= k;
        imp++;
    }
    if (l == 1)
    {
        cout << "YES" << endl;
        cout << imp - 1 << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}
