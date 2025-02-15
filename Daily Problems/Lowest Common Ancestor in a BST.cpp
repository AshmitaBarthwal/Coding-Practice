//https://www.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-bst/1



/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution 
{
  public:
    Node* LCA(Node* root, Node* n1, Node* n2) 
    {
        if (!root) return NULL;  
        if (n1->data < root->data && n2->data < root->data)  
            return LCA(root->left, n1, n2);  
        if (n1->data > root->data && n2->data > root->data)  
            return LCA(root->right, n1, n2);  
        return root;  
    }
};
