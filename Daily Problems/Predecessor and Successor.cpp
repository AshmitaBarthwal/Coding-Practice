//https://www.geeksforgeeks.org/problems/predecessor-and-successor/1



/* BST Node
class Node
{
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    vector<Node*> findPreSuc(Node* root, int key) 
    {
         if(!root){
            return {NULL, NULL};
        }
        
        return {pre(root, key), suc(root, key)};
    }
    
    Node* pre(Node* root, int k){
        
        
        Node* pred = NULL;
        Node* curr = root;
        
        while(curr != NULL){
            
            if(k <= curr->data){
                curr = curr->left;
            }else{
                pred = curr;
                curr = curr->right;
            }
        }
        
        return pred;
    }
    
    Node* suc(Node* root, int k){
        
        Node* succ = NULL;
        Node* curr = root;
        
        while(curr != NULL){
            
            if(k >= curr->data){
                curr = curr->right;
            }else{
                succ = curr;
                curr = curr->left;
            }
        }
        
        return succ;
    }
};
