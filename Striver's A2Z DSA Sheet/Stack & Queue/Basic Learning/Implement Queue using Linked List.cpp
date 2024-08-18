// https://www.geeksforgeeks.org/problems/implement-queue-using-linked-list/1


//Brute: 
//Time: O(n)
//Space: O(n)
#include<bits/stdc++.h>
using namespace std;

struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
};



int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        MyQueue *sq = new MyQueue();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";

        }
        }
        cout<<endl;
    }
}


void MyQueue:: push(int x){
        QueueNode* newnode = new QueueNode(x);
        if(!front) front = rear = newnode;
        else{
            rear->next = newnode;
            rear = newnode;
        }
}

int MyQueue :: pop(){
        if(!front) return -1;
        
        QueueNode* temp = front;
        front = front->next;
        if(!front) rear = nullptr;
        int top = temp->data;
        delete(temp);
        return top;
}
