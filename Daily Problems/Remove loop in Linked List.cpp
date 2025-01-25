//https://www.geeksforgeeks.org/problems/remove-loop-in-linked-list/1



/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) 
    {
        Node* fast = head;
        Node* slow = head;
        while(fast!= NULL and fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast)
            {
                slow = head;
                while(slow!=fast)
                {
                    fast = fast->next;
                    slow = slow->next;
                }
                while(fast->next != slow)
                {
                    fast= fast->next;
                }
                fast->next = NULL;
                
            }
        }
    }
};
