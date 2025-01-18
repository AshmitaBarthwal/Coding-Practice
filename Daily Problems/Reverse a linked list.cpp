//https://www.geeksforgeeks.org/problems/reverse-a-linked-list/1



/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution {
  public:
    Node* reverseList(struct Node* head) 
    {
        Node* temp=head;
        Node* next=NULL;
        Node* prev=NULL;
        while(temp)
        {
            next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;
        }
       
        return prev;
    }
};
