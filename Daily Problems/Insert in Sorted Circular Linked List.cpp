//https://www.geeksforgeeks.org/problems/sorted-insert-for-circular-linked-list/1



/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) 
    {
        Node* last = head;
        Node* temp = new Node(data);
        
        while(last->next != head)
        {
            last = last->next;
        }
        if(data < head->data)
        {
            temp->next = head;
            last->next = temp;
            return temp;
        }
        
        Node* curr = head;
        while(curr->next != head && curr->next->data <= data)
        curr = curr->next;
        
        temp->next = curr->next;
        curr->next = temp;
        
        return head;
    }
};
