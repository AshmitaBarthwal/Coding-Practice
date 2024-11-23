// https://codeforces.com/problemset/problem/140/A


#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    long double R, r;
    long long n;
    cin >> n >> R >> r;

    if (r > R) 
    {
        cout << "NO";
        return 0;
    }

    if (n == 1)
    {
        cout << "YES";
        return 0;
    }

    if (n == 2 && r * 2 <= R) 
    {
        cout << "YES";
        return 0;
    }

    cout << (n * asin(r / (R - r)) <= 3.1415927 ? "YES" : "NO");

    return 0;
}
