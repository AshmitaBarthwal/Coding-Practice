// https://codeforces.com/problemset/problem/832/A


#include <iostream>
using namespace std;

int main() 
{
    long long n, k;
    cin >> n >> k;

    long long moves = n / k;

    if (moves % 2 == 1) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}
