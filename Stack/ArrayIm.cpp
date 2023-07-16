#include<iostream>
using namespace std;
const int MAX_SIZE = 100;
class ArrayStack{
    private:
    int stack[MAX_SIZE];
    int top;

    public:
    ArrayStack()
    {
        top = -1;
    }
    bool isEmpty(){
        return top==-1;
    }
    bool isFull(){
        return top==MAX_SIZE-1;
    }
    void push(int item)
    {
        if (isFull())
        {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top = top+1;
        stack[top] = item;
    }
    int pop() {
        if (isEmpty())
        {
            cout<<"Stack Underflow"<<endl;
        }
        return stack[top--];
    }
    int peek(){
        return top+1;
    }

     int size() {
        return top + 1;
    }

    void printStack() {
        cout<<"Stack Elements:"<<endl;
        for (int i=top; i>=0; i--)
        {
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    ArrayStack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.printStack();
    cout << "Top element: " << stack.peek() << endl;

    // Popping elements from the stack
    cout << "Popped element: " << stack.pop() << endl;
    cout << "Popped element: " << stack.pop() << endl;

    // Checking if the stack is empty
    if (stack.isEmpty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    // Size of the stack
    cout << "Size of stack: " << stack.size() << endl;
    stack.printStack();


    return 0;
}