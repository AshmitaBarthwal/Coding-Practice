// https://leetcode.com/problems/implement-queue-using-stacks/description/


//Brute: Using 2 stacks, push the element onto s1
//To pop, push the top element from s1 to s2, do this until 1 element remains in s1
//return the element from s1 and pop it
//push the top elements from s2 to s1, until s2 is empty
//To peek, do the same as pop, just dont pop the last element remaining in s1
//For empty, return s1.empty()
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



//Better: Use an input & output stack
//To push, push all the elements onto the input stack
//To pop, if output stack is empty then push all elements of the input stack onto output stack
//Then return output.top()
//Similarily for peek
//for empty return s1.empty()
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
