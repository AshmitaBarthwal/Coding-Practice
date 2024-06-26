# https://www.naukri.com/code360/problems/reverse-letter-triangle_6581906?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM
void nLetterTriangle(int n) 
{
        for(int i=0;i<n;i++)
        {
          for(char ch = 'A'; ch<='A'+(n-i-1);ch++){
              cout<<ch<<" ";
              
          }
          cout<<endl;
          
      }
}
