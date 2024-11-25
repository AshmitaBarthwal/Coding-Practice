// https://codeforces.com/problemset/problem/1030/A


#include <iostream>
#include <vector>;
#include <algorithm>;

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int num;
        cin >> num;
        if(num == 1)
        {
            cout << "HARD" << endl;
            return 0;
        }
    }
    
    cout << "EASY" << endl;
    
    return 0;
}
