// https://www.spoj.com/problems/AGGRCOW/


//Brute: Using Linear Search
//Time: O(n^2)
//Space: O(1)
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool canPlace(vector<int>& stalls, int dist, int cows){
	int count = 1, last = stalls[0];
	
	int n = stalls.size();
	for(int i=1;i<n;i++){
		if(stalls[i] - last >= cows){
			count++;
			last = stalls[i];
			if(count == cows) return true;
		}
	}
	return false;
}

int main() {
	
	int t;
	cin >> t;
	while(t--){
		int n, c;
		cin >> n >> c;
		
		vector<int> stalls(n);
		for(int i=0;i<n;i++) cin >> stalls[i];
		
		int mx = *max_element(stalls.begin(), stalls.end());
		int mn = *min_element(stalls.begin(), stalls.end());
		
		int result = 0;
		sort(stalls.begin(), stalls.end());
		for(int i=1;i<=mx-mn;i++){
			if(canPlace(stalls, i, c)) result = i;
			else break;
		}
		
		cout << result << endl;
	}
	return 0;
}



//Better: Using Binary Search
//Time: O(nlogn)
//Space: O(1)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canPlace(vector<int>& stalls, int dist, int cows) {
    int count = 1, last = stalls[0]; // Place the first cow in the first stall

    for(int i = 1; i < stalls.size(); i++) {
        if(stalls[i] - last >= dist) {
            count++;
            last = stalls[i];
            if(count == cows) return true; // All cows placed successfully
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, c;
        cin >> n >> c;

        vector<int> stalls(n);
        for(int i = 0; i < n; i++) cin >> stalls[i];

        sort(stalls.begin(), stalls.end());

        int low = 1; // Minimum possible distance
        int high = stalls[n-1] - stalls[0]; // Maximum possible distance
        int result = 0;

        while(low <= high) {
            int mid = (low + high) / 2;
            if(canPlace(stalls, mid, c)) {
                result = mid;
                low = mid + 1; 
            } else high = mid - 1; 
        }

        cout << result << endl;
    }

    return 0;
}
