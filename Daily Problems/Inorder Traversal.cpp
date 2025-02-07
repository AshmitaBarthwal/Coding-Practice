//https://www.geeksforgeeks.org/problems/inorder-traversal/1



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

class Solution {
  public:
     void inorderHelper(Node* root, vector<int>& res) {
        if (!root) return;

        inorderHelper(root->left, res);   // Traverse left subtree
        res.push_back(root->data);        // Visit root
        inorderHelper(root->right, res);  // Traverse right subtree
    }

    vector<int> inOrder(Node* root) {
        vector<int> res;
        inorderHelper(root, res);
        return res;
    }
};
