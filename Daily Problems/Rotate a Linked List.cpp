//https://www.geeksforgeeks.org/problems/rotate-a-linked-list/1


class Solution {
  public:
    Node* rotate(Node* head, int k) 
    {
        Node* tempNode = head;
        Node* listTail;
        int nodeCount = 0;
        
        while (tempNode != NULL) {
            nodeCount++;
            listTail = tempNode;
            tempNode = tempNode->next;
        }
        
        k = k % nodeCount;
        if (k == 0) return head;
        
        tempNode = head;
        k--;
        while (k--) {
            tempNode = tempNode->next;
        }
        
        Node* newHead = tempNode->next;
        tempNode->next = NULL;
        listTail->next = head;
        
        return newHead;

    }
};
