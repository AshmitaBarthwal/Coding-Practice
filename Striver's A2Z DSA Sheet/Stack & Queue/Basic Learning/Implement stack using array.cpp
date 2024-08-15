// https://www.geeksforgeeks.org/problems/implement-stack-using-array/1


//Brute
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
int MyStack ::pop() {
    if(top == -1) return -1;
    return arr[top--];
}
