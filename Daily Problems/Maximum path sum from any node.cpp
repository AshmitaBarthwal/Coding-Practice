//https://www.geeksforgeeks.org/problems/maximum-path-sum-from-any-node/1



// User Fuction template for C++
/*
// Tree Node
class Node {
public:
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
    // Function to return maximum path sum from any node in a tree.
    int findMaxSum(Node *root) 
    {
        int maxi = INT_MIN;
        solve(root,maxi);
        return maxi;
    }
     int solve(Node* root, int& maxi) {
        if(root==NULL) return 0;
        
        int left = max(0, solve(root->left, maxi));
        int right = max(0, solve(root->right, maxi));
        
        maxi = max(maxi, root->data + left + right);
        
        return root->data + max(left, right);
    }
};
