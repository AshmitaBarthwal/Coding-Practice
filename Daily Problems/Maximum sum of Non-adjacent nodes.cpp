//https://www.geeksforgeeks.org/problems/maximum-sum-of-non-adjacent-nodes/1



// User function Template for C++

// Node Structure
/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution 
{
  public:
    // Function to return the maximum sum of non-adjacent nodes.
    int solve(Node* root,unordered_map<Node*,int>&mp)
    {
        if(root == nullptr)return 0;
        if(mp.find(root) !=mp.end())return mp[root];
        int nontake = solve(root->left,mp)+solve(root->right,mp);
        int take = root->data;
        if(root->left)
        {
            take += solve(root->left->left,mp);
            take += solve(root->left->right,mp);
        }
        if(root->right)
        {
            take += solve(root->right->left,mp);
            take += solve(root->right->right,mp);
        }
        return mp[root] = max(take,nontake);
    }
    
    int getMaxSum(Node *root) 
    {
        unordered_map<Node*,int>mp;
        return solve(root,mp);
    }
};
