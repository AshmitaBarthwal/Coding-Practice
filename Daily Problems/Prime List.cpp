//https://www.geeksforgeeks.org/problems/prime-list--170646/1



// User function Template for C++

/*
class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};
*/

class Solution {
  public:
    Node *primeList(Node *head) 
    {
         Node* root=head;
      while(root){
          int ele=root->val;
          bool istrue=false;
          if(ele==1){
              root->val=2;
              root=root->next;
              continue;
          }
          for(int i=2;i*i<=ele;i++){
              if(ele%i==0){
                  istrue=true;
                  break;
              }
          }
          if(istrue){
              int num1=-1;
              int num2=-1;
              bool is1=false;
              bool is2=false;
              for(int i=ele;i<=1e5;i++){
                  for(int j=2;j*j<=i;j++){
                      if(i%j==0){
                          is1=true;
                          break;
                      }
                  }
                  if(!is1){
                      num1=i;
                      break;
                  }
                  is1=false;
              }
              
              
             for(int i=ele;i>=2;i--){
                  for(int j=2;j*j<=i;j++){
                      if(i%j==0){
                          is2=true;
                          break;
                      }
                  }
                  if(!is2){
                      num2=i;
                      break;
                  }
                  is2=false;
              } 
              if(num1-ele<ele-num2)
              root->val=num1;
              else
              root->val=num2;
          }
          root=root->next;
      }
        return head;
    }
};
