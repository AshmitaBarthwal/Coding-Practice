//https://codeforces.com/problemset/problem/1092/B


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int n;
    cin >> n; 
    vector<int> skills(n);

    for (int i = 0; i < n; i++) {
        cin >> skills[i];
    }

    sort(skills.begin(), skills.end()); 
    int total_problems = 0;

    for (int i = 0; i < n; i += 2) {
        total_problems += skills[i + 1] - skills[i];
    }

    cout << total_problems << endl;
    return 0;
}
