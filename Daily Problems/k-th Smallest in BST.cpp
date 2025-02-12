//https://www.geeksforgeeks.org/problems/find-k-th-smallest-element-in-bst/1



/*Complete the function below

struct Node {
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
    int kthSmallest(Node* root, int k) {
        int count = 0;
        return inorder(root, k, count);
    }

private:
    int inorder(Node* root, int k, int &count) {
        if (!root) return -1;

        int left = inorder(root->left, k, count);
        if (left != -1) return left;  // If kth element is found in left subtree

        count++;
        if (count == k) return root->data;  // Found the kth smallest element

        return inorder(root->right, k, count);  // Traverse right subtree
    }
};
