//https://www.geeksforgeeks.org/problems/find-length-of-loop/1




/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution 
{
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) 
    {
        Node* fast = head;
       Node* slow = head;
       while(fast!=NULL && fast->next!=NULL){
           fast=fast->next->next;
           slow=slow->next;
           if(fast==slow){
               break;
           }
       }
       if(fast==NULL || fast->next==NULL) return 0;
       int len = 1;
       while(fast->next!=slow){
           fast=fast->next;
           len++;
       }
       return len;
    }
};
