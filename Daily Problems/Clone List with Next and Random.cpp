//https://www.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1



/* Link list Node
struct Node {
    int data;
    Node *next;
    Node *random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};*/

class Solution 
{
  public:
    Node *cloneLinkedList(Node *head) 
    {
        if (!head) return NULL; 
        Node *curr = head;
        while (curr) {
            Node *copy = new Node(curr->data);
            copy->next = curr->next;
            curr->next = copy;
            curr = copy->next;
        }

        curr = head;
        while (curr) {
            if (curr->random) {
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }

        // Step 3: Separate the copied list from the original list
        Node *newHead = head->next;
        Node *copyCurr = newHead;
        curr = head;

        while (curr) {
            curr->next = curr->next->next;
            if (copyCurr->next) {
                copyCurr->next = copyCurr->next->next;
            }
            curr = curr->next;
            copyCurr = copyCurr->next;
        }

        return newHead;
    }
};
