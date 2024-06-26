# https://www.naukri.com/code360/problems/rotated-triangle_6573688?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM
void nStarTriangle(int n) {
    for(int i=1;i<=2*n-1;i++)
    {
          int stars = i;
          if(i>n) stars = 2*n-i;
          for (int j = 1; j <= stars; j++) {
            cout << "*";
          }
          cout << endl;
    }
}
