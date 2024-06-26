# https://www.geeksforgeeks.org/problems/triangle-number-1661489840/1
class Solution{
public:
	
	void printTriangle(int n) {
	    for(int i=n;i>0;i--)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<j <<" ";
            }
            cout<<endl;
        }
	}
};
