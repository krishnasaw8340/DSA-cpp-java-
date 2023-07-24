package Stack;

class Arrayjava {
    private int[] stack;
    private int top;
    
    public Arrayjava(int capacity)
    {
        stack = new int[capacity];
        top = -1;
    }
    public boolean isEmpty() {
        return top==-1;
    }
    public boolean isFull(){
        return top==stack.length - 1;
    }
    public void push(int item){
        if (isFull())
        {
            System.out.println("Stack Overflow");
            return;
        }
        top  = top + 1;
        stack[top]= item;
    }
    public int pop(){
        if(isEmpty())
        {
            System.out.println("Stack Underflow:");
            return -1;
        }
        top = top -1;
        return stack[top];
    }

    public int peek() {
        if (isEmpty()) {
            System.out.println("Stack is Empty");
            return -1; // Return a default value to indicate empty stack
        }
        return stack[top];
    }

    public int size() {
        return top + 1;
    }

    public static void main(String[] args)
    {
        Arrayjava stack = new Arrayjava(5);
        stack.push(10);
        stack.push(20);
        stack.push(30);
        stack.push(40);
        stack.push(50);
        
                // Displaying the top element
                System.out.println("Top element: " + stack.peek());

                // Popping elements from the stack
                System.out.println("Popped element: " + stack.pop());
                System.out.println("Popped element: " + stack.pop());
                if (stack.isEmpty()) {
                    System.out.println("Stack is empty");
                } else {
                    System.out.println("Stack is not empty");
                }
                System.out.println("Size of stack: " + stack.size());
        
    }
}