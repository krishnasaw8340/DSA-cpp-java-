
public class LinkedListJava {
    private class Node{
        int data;
        Node next;

        Node (int item) {
            data = item;
            next = null;
        }
    };
    private Node head;

    public LinkedListJava() {
        head = null;
    }
    public boolean isEmpty() {
        return head==null;
    }
    public void push(int item)
    {
        Node newNode = new Node(item);
        if(isEmpty()) 
        {
            head = newNode;
        }
        else{
            newNode.next = head;
            head =  newNode;
        }
    }
    public int pop() {
        if(isEmpty())
        {
            System.out.println("Stack UnderFlow");
            return -1;
        }
        int data = head.data;
        head = head.next;
        return data;
    }
    public int peek() {
        if (isEmpty()) {
            System.out.println("Stack is Empty");
            return -1; 
        }
        return head.data;
    }
    public int size() {
        int count = 0;
        Node current = head;
        while (current != null) {
            count++;
            current = current.next;
        }
        return count;
    }

    public static void main(String[] args)
    {
        LinkedListJava stack = new LinkedListJava();

      
        stack.push(10);
        stack.push(20);
        stack.push(30);

       
        System.out.println("Top element: " + stack.peek());

       
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
    

