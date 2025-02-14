//https://www.geeksforgeeks.org/problems/fixed-two-nodes-of-a-bst/1



/*
class Node
{
    public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void inOrder(Node* root, vector<Node*>& res)
    {
        if(root)
        {
            inOrder(root->left, res);
            res.push_back(root);
            inOrder(root->right, res);
        }
    }
    void correctBST(Node* root) 
    {
        // add code here.
        vector<Node*> res;
        inOrder(root, res);
        
        Node* first = nullptr;
        Node* second = nullptr;
        
        for(int i = 0; i < res.size() - 1; i++)
        { 
            if(res[i]->data > res[i + 1]->data)
            {
                if(!first) first = res[i];
                second = res[i + 1];
            }
        }
        if (first && second) 
            swap(first->data, second->data);  
    }
};
