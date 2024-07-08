// https://www.geeksforgeeks.org/problems/find-nth-root-of-m5843/1


//Brute: Using Linear Search
//Time: O(m*n)
//Space: O(1)
long long func(int b, int exp) {
    long long  ans = 1;
    long long base = b;
    while (exp > 0) {
        if (exp % 2) {
            exp--;
            ans = ans * base;
        }
        else {
            exp /= 2;
            base = base * base;
        }
    }
    return ans;
}

int NthRoot(int n, int m) {
    for (int i = 1; i <= m; i++) {
        long long val = func(i, n);
        if (val == m * 1ll) return i;
        else if (val > m * 1ll) break;
    }
    return -1;
}


//Optimal: Using Binary Search
//Time: O(nlogn)
//Space: O(n)
class Solution{
	public:
	
    int power(int mid, int n, int m){
        long long result = 1;
        for(int i=1;i<=n;i++){
            result *= mid;
            if(result > m) return 2;
        }
        
        if(result == m) return 1;
        return 0;
    }	
	
	int NthRoot(int n, int m){
	    int low = 1, high = m;
	    while(low <= high){
	        int mid = low + (high - low)/2;
	        int num = power(mid, n, m);
	        
	        if(num == 1) return mid;
	        else if(num == 0) low = mid + 1;
	        else if(num == 2) high = mid - 1;
	    }
	    return -1;
	}  
};
