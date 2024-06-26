# https://www.naukri.com/code360/problems/alpha-ramp_6581888?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM
void alphaRamp(int n) 
{
    for(int i=0;i<n;i++)
    {
          char ch = 'A'+i;
          for (int j = 0; j <= i; j++) {
            cout << ch << " ";
          }
          cout << endl;
    }
}
