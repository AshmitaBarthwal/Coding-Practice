//https://www.geeksforgeeks.org/problems/clone-graph/1



// User function Template for C++

// struct Node {
//     int val;
//     vector<Node*> neighbors;
//     Node() {
//         val = 0;
//         neighbors = vector<Node*>();
//     }
//     Node(int _val) {
//         val = _val;
//         neighbors = vector<Node*>();
//     }
//     Node(int _val, vector<Node*> _neighbors) {
//         val = _val;
//         neighbors = _neighbors;
//     }
// };

class Solution {
  public:
    Node*f(Node* node , map<int , Node*>&vis)
    {
        int data = node -> val ;
        if(vis[data] != NULL) return vis[data] ;
        Node* clone = new Node(data) ;
        
        vis[data] = clone ;
        for(Node* neigh : node->neighbors)
        {
            Node* temp = f(neigh , vis) ;
            clone->neighbors.push_back(temp) ;
        }
        return clone ;
    }
    
    Node* cloneGraph(Node* node) 
    {
        map<int , Node*>vis ;
        return f(node , vis) ;
    }
};
