# https://www.geeksforgeeks.org/problems/triangle-pattern/1
class Solution{
public:
	
	void printTriangle(int n) {
	    for(int i=n;i>0;i--)
        {
            for(int j=i;j>0;j--)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
	}
};
