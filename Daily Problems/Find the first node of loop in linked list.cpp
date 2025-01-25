//https://www.geeksforgeeks.org/problems/find-the-first-node-of-loop-in-linked-list--170645/1



/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution {
  public:
    Node* findFirstNode(Node* head) 
    {
        Node* slow = head;
        Node* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                break;
            }
        }
        if(slow!=fast){
            return NULL;
        }
        slow = head;
        while(slow!=fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};
