//https://www.geeksforgeeks.org/problems/cutting-binary-string1342/1



class Solution {
  public:
    bool isPower5(int num){
        if(num==0){
            return 1;
        }
        while(num>1 && num%5==0){
            num/=5;
        }
        return num==1;
    }
    bool isValid(string s){
        if(s[0]=='0') return 0;
        int n = s.size();
        if(n==0) return 1;
        int num = 0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1'){
                num |= (1<<((n-1)-i));
            }
        }
        return isPower5(num);
    }
    int cuts(string s) {
        if(s=="") return 0;
        if(s[0]=='0') return -1;
        // code here
        int n = s.size();
        for(int i=0;i<n;i++){
            if(isValid(s.substr(i))){
                int add = cuts(s.substr(0,i));
                if(add!=-1){
                    return 1+add;
                }
            }
        }
        return -1;
    }

};
