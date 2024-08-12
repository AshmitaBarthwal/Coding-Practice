// https://www.geeksforgeeks.org/problems/implement-stack-using-linked-list/1


//Brute
//Time: O(1)
//Space: O(n)
#include <bits/stdc++.h>
using namespace std;

struct StackNode {
    int data;
    StackNode *next;

    StackNode(int a) {
        data = a;
        next = NULL;
    }
};

class MyStack {
  private:
    StackNode *top;

  public:
    void push(int x) {
       StackNode* newnode = new StackNode(x);
       if(top) newnode->next = top;
       top = newnode;
    }

    int pop() {
        if(!top) return -1;
        int num = top->data;
        StackNode* temp = top;
        top = top->next;
        delete (temp);
        return num;
    }

    MyStack() { top = NULL; }
};
