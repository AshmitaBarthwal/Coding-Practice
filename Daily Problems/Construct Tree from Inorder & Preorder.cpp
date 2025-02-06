//https://www.geeksforgeeks.org/problems/construct-tree-1/1



// Class that contains the logic to build the binary tree
/*
Definition of the Node class
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
};
*/
    class Solution {
public:
    int preIndex = 0;
    
    Node* buildTreeHelper(vector<int>& inorder, vector<int>& preorder, 
                          int inStart, int inEnd, unordered_map<int, int>& inMap) 
    {
        if (inStart > inEnd) return NULL;

        int rootVal = preorder[preIndex++];
        Node* root = new Node(rootVal);

        int inIndex = inMap[rootVal];

        root->left = buildTreeHelper(inorder, preorder, inStart, inIndex - 1, inMap);
        root->right = buildTreeHelper(inorder, preorder, inIndex + 1, inEnd, inMap);

        return root;
    }

    Node* buildTree(vector<int>& inorder, vector<int>& preorder) {
        unordered_map<int, int> inMap;
        for (int i = 0; i < inorder.size(); i++) {
            inMap[inorder[i]] = i;
        }
        return buildTreeHelper(inorder, preorder, 0, inorder.size() - 1, inMap);
    }
};
