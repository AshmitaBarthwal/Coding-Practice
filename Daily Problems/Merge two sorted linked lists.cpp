//https://www.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1



/* Link list Node
struct Node {
  int data;
  struct Node *next;

  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) 
    {
        Node* newHead = NULL;
        Node* temp1 = head1;
        Node* temp2 = head2;
        Node* temp3 = NULL;
        while(temp1 && temp2){
            if(temp1->data < temp2->data){
                if(!newHead){
                    temp3 = temp1;
                    newHead = temp3;
                }
                else{
                    temp3->next = temp1;
                    temp3 = temp3->next;
                }
                temp1 = temp1->next;
            }
            else{
                if(!newHead){
                    temp3 = temp2;
                    newHead = temp3;
                }
                else{
                    temp3->next = temp2;
                    temp3 = temp3->next;
                }
                temp2 = temp2->next;
            }
        }
        if(temp1){
            temp3->next = temp1;
        }
        else{
            temp3->next = temp2;
        }
        
        return newHead;
    
    }
};
