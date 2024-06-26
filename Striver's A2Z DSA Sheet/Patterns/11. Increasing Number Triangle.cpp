# https://www.naukri.com/code360/problems/increasing-number-triangle_6581893?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM
void nNumberTriangle(int n) {
   int p=1;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=i;j++)
       {
           cout<<p<<" ";
           p++;
       }
       cout<<endl;
   }
}
