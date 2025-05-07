//https://www.geeksforgeeks.org/problems/root-to-leaf-paths/1



/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void dfs(Node* root, vector<int>& path, vector<vector<int>>& ans) 
    {
        if (!root) return;

        path.push_back(root->data);

        // If it's a leaf node
        if (!root->left && !root->right) 
        {
            ans.push_back(path);
        } else {
            // Recur for left and right subtree
            dfs(root->left, path, ans);
            dfs(root->right, path, ans);
        }

        // Backtrack
        path.pop_back();
    }

    vector<vector<int>> Paths(Node* root) 
    {
        vector<vector<int>> ans;
        vector<int> path;
        dfs(root, path, ans);
        return ans;
    }
};
