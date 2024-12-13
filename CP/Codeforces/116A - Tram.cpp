// https://codeforces.com/problemset/problem/116/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(2, 0));
    for(int i=0;i<n;i++){
        cin >> mat[i][0] >> mat[i][1];
    }

    int curr = mat[0][1], d = curr;
    for(int i=1;i<n;i++)
    {
        curr -= mat[i][0];
        curr += mat[i][1];
        d = max(d, curr);
    }

    cout << d << endl;
    return 0;
}
