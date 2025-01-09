//https://codeforces.com/problemset/problem/25/A



#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    
    for(int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    
    int evenCount = 0, oddCount = 0;
    int evenIndex = -1, oddIndex = -1;
    
    for(int i = 0; i < n; ++i) {
        if (numbers[i] % 2 == 0) {
            evenCount++;
            evenIndex = i + 1;
        } else {
            oddCount++;
            oddIndex = i + 1;
        }
    }
    
    if (evenCount > oddCount) {
        cout << oddIndex << endl;
    } else {
        cout << evenIndex << endl;
    }
    
    return 0;
}
