//https://www.geeksforgeeks.org/problems/closest-neighbor-in-bst/1




/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    int findMaxFork(Node* root, int k) 
    {
        int ans = -1;
        while (root) 
        {
            if (root->data <= k) 
            {
                ans = root->data;
                root = root->right;
            } 
            else 
            {
                root = root->left;
            }
        }
        return ans;
    }
};
