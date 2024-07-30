// https://www.geeksforgeeks.org/problems/implement-stack-using-array/1


//Brute: To push the element increase top and then arr[top] = x
//To pop check if top is -1 then return -1, else return arr[top] and decrease top
//Time: O(n)
//Space: O(n)

/*
class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};
*/

void MyStack ::push(int x) {
    top++;
    arr[top] = x;
}

// Function to remove an item from top of the stack.
int MyStack ::pop() {
    if(top == -1) return -1;
    return arr[top--];
}
