//https://www.geeksforgeeks.org/problems/find-a-pair-with-given-target-in-bst/1



/*
Node is as follows
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void inorder(Node* root,vector<int>&ans){
      if(root==NULL)
      {
          return ;
      }
      inorder(root->left,ans);
      ans.push_back(root->data);
      inorder(root->right,ans);
  }
    bool findTarget(Node *root, int target) {
        // your code here.
        vector<int>ans;
        inorder(root,ans);
        
        int i=0,j=ans.size()-1;
        while(i<j){
            int sum=ans[i]+ans[j];
            if(sum==target){
                return true;
            }
            else if(sum<target){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
    }
};
