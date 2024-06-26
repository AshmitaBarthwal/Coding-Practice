# https://www.naukri.com/code360/problems/increasing-letter-triangle_6581897?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM
void nLetterTriangle(int n) 
{
    for(int i=0;i<n;i++)
    {
          for(char ch = 'A'; ch<='A'+i;ch++)
          {
              cout<<ch<<" ";
              
          }
          cout<<endl;
          
      }
}
