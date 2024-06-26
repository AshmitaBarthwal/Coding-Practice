# https://www.geeksforgeeks.org/problems/square-pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_1

class Solution {
  public:
    void printSquare(int n) {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};
