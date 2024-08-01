// https://leetcode.com/problems/implement-stack-using-queues/description/


//Brute: Using 2 queues, push elements onto q1
//when you need to pop, push all elements except last one from q1 to q2
//pop the last element from q1
//copy all the elements from q2 to q1
//for top return top simply return q1.back(), and to check empty return q1.empty()
//empty q1
//Time: O(n)
//Space: O(n)
class MyStack {
public:

    queue<int> q1, q2;
    MyStack() {}
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        int top;
        if(!q1.empty()){
            while(q1.size() > 1){
                q2.push(q1.front());
                q1.pop();
            }
            top = q1.front();
            q1.pop();
            q1 = q2;
            while(!q2.empty()) q2.pop();
        }
        return top;
    }
    
    int top() {
        return q1.back();
    }
    
    bool empty() {
        return q1.empty();
    }
};



//Better: Using 1 queue, push all the elements in q
//When you need to pop, push the front element of the queue into the queue
//Pop the front element, do this for q.size()-1 times
//finally the front element will be the top element, pop it and return it
//for top return top simply return q.back(), and to check empty return q.empty()
//Time: O(n)
//Space: O(n)
class MyStack {
public:

    queue<int> q;
    MyStack() {}
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        for(int i=0;i<q.size()-1;i++){
            q.push(q.front());
            q.pop();
        }
        int top = q.front();
        q.pop();
        return top;
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        return q.empty();
    }
};
