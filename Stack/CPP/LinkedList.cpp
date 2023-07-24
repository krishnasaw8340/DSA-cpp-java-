#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node(int item) {
        data = item;
        next = nullptr;
    }
};
class LinkedListStack {
    private:
    Node* head;

    public:
    LinkedListStack(){
        head = nullptr;
    }
    bool isEmpty() {
        return head == nullptr;
    }
    void push(int item)
    {
        Node* newNode = new Node(item);
        if (isEmpty())
        {
            head = newNode;
        }
        else {
            newNode ->next = head;
            head = newNode;
        }
    }
    int pop() {
        if (isEmpty()){
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        int data = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;
        return data;
    }
     int peek() {
        if (isEmpty()) {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return head->data;
    }
    int size() {
        int count = 0;
        Node* current = head;
        while(current != nullptr)
        {
            count++;
            current = current->next;
        }
        return count;
    }

};
int main() {
     LinkedListStack stack;

    // Pushing elements onto the stack
    stack.push(10);
    stack.push(20);
    stack.push(30);

    // Displaying the top element
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

    return 0;

}