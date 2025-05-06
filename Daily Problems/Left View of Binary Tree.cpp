//https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1



/* A binary tree node

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
    vector<int> leftView(Node *root) 
    {
        vector<int>ans;
        if(!root){return ans;}
        queue<Node*>q;
        q.push(root);
        while(q.size()){
            int sz=q.size(), i=0;
            while(sz--){
                auto b=q.front(); q.pop();
                if(i==0){
                    ans.push_back(b->data); i++;
                }
                if(b->left){q.push(b->left);}
                if(b->right){q.push(b->right);}
            }
        }
        return ans;
        
    }
};
