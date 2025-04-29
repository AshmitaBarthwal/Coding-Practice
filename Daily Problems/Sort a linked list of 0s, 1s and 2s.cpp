//https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1



/*  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* segregate(Node* head) 
    {
        int zc=0;
        int oc=0;
        int tc=0;
        Node* temp=head;
        while( temp !=NULL)
        {
            if(temp->data==0)
            {
                zc++;
            }
            else if(temp->data==1)
            {
                oc++;
            }
            else
            {
                tc++;
            }
            temp=temp->next;
        }
        temp = head;
        
        while(temp != NULL)
        {
            if(zc > 0)
            {
                temp->data = 0;
                zc--;
            }
            else if(oc > 0)
            {
                temp->data = 1;
                oc--;
            }
            else
            {
                temp->data = 2;
                tc--;
            }
            temp = temp->next;
        }
        
        return head;
    }
};
