//https://www.geeksforgeeks.org/problems/diameter-of-binary-tree/1



/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* newNode(int val) {
    return new Node(val);
}
*/

class Solution {
  public:
     int solve(Node* root,int &maxi)
     {
         if(root==nullptr) return -1;
         int leftheight=1+solve(root->left,maxi);
         int rightheight=1+solve(root->right,maxi);
         
         int dia=leftheight+rightheight;
         maxi=max(maxi,dia);
         return max(leftheight,rightheight);
     }
    int diameter(Node* root) 
    {
        int maxi=0;
        int t=solve(root,maxi);
        return maxi;
    }
};
