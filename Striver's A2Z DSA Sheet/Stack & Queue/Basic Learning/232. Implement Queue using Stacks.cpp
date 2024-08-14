// https://leetcode.com/problems/implement-queue-using-stacks/description/


//Brute
//Time: O(n)
//Space: O(n)
class MyQueue {
public:

    stack<int> s1, s2;
    MyQueue() {}
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        int top;
        if(!s1.empty()){
            while(s1.size() > 1){
                s2.push(s1.top());
                s1.pop();
            }
            top = s1.top();
            s1.pop();
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
        return top;
    }
    
    int peek() {
        int top;
        if(!s1.empty()){
            while(s1.size() > 1){
                s2.push(s1.top());
                s1.pop();
            }
            top = s1.top();
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
        return top;
    }
    
    bool empty() {
        return s1.empty();
    }
};



//Better
//Time: O(1) -> Amotised (Not exactly O(1), but for most cases O(1))
//Space: O(n)
class MyQueue {
public:

    stack<int> s1, s2;
    MyQueue() {}
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        int top;
        if(!s1.empty()){
            while(s1.size() > 1){
                s2.push(s1.top());
                s1.pop();
            }
            top = s1.top();
            s1.pop();
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
        return top;
    }
    
    int peek() {
        int top;
        if(!s1.empty()){
            while(s1.size() > 1){
                s2.push(s1.top());
                s1.pop();
            }
            top = s1.top();
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
        return top;
    }
    
    bool empty() {
        return s1.empty();
    }
};
