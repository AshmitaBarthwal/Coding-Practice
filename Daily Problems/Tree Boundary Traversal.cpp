//https://www.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1



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
    void LeftTraversal(Node* root, vector<int>& ans) {
    if (root == NULL || (root->left == NULL && root->right == NULL)) return;
    ans.push_back(root->data);
    if (root->left) LeftTraversal(root->left, ans);
    else LeftTraversal(root->right, ans);
}

void LeafTraversal(Node* root, vector<int>& ans) {
    if (root == NULL) return;
    if (root->left == NULL && root->right == NULL) ans.push_back(root->data);
    LeafTraversal(root->left, ans);
    LeafTraversal(root->right, ans);
}

void RightTraversal(Node* root, vector<int>& ans) {
    if (root == NULL || (root->left == NULL && root->right == NULL)) return;
    if (root->right) RightTraversal(root->right, ans);
    else RightTraversal(root->left, ans);
    ans.push_back(root->data);
}

vector<int> boundaryTraversal(Node* root) {
    vector<int> ans;
    if (root == NULL) return ans;
    ans.push_back(root->data);
    LeftTraversal(root->left, ans);
    LeafTraversal(root->left, ans);
    LeafTraversal(root->right, ans);
    RightTraversal(root->right, ans);
    return ans;
}
};
