// https://leetcode.com/problems/implement-stack-using-queues/description/


//Brute
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



//Better
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
