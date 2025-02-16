//https://www.geeksforgeeks.org/problems/serialize-and-deserialize-a-binary-tree/1



/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution {
  public:
    vector<int> serialize(Node *root) {
        vector <int> arr;
        queue <Node*> q;
        q.push(root);
        
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            
            if(!node) {
                arr.push_back(-1);
                continue;
            }
            arr.push_back(node->data);
            q.push(node->left);
            q.push(node->right);
        }
        
        return arr;
    }

    Node *deSerialize(vector<int> &arr) {
        int n = arr.size();
        int i = 0;
        queue <Node*> q;
        Node* root = new Node(arr[i++]);
        q.push(root);
        
        while(i < n){
            auto curr = q.front();
            q.pop();
            if(arr[i] != -1){
                curr -> left = new Node(arr[i]);
                q.push(curr -> left);
            }
            i++;
            
            if(!(i < n)) break;
            if(arr[i] != -1){
                curr -> right = new Node(arr[i]);
                q.push(curr -> right);
            }
            i++;
        }
        
        return root;
    }
};
