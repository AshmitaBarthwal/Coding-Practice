// https://codeforces.com/problemset/problem/703/A


#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    int m, c, ms = 0, cs = 0;
    for(int i = 0; i < n; i++) 
    {
        cin >> m >> c;
        if(m > c) 
        {
            ms++;
        } 
        else if(c > m) 
        {
            cs++;
        }
    }
    
    if(ms > cs) 
    {
        cout << "Mishka" << endl;
    } 
    else if(cs > ms) 
    {
        cout << "Chris" << endl;
    } 
    else 
    {
        cout << "Friendship is magic!^^" << endl;
    }
    
    return 0;
}
