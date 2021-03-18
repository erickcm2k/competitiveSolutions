class Stack {

    private Node first = null; 

    private class Node {
        String item;
        Node next;
    }

    public boolean isEmpty() {
        return first == null;
    }

    public void push(String item) {
        Node oldFirst = first;
        first = new Node();
        first.item = item;
        first.next = oldFirst;
    }

    public String pop() {
        try {
            String item = first.item;
            first = first.next;        
            return item;
        } catch (Exception e) {
            return null;
        }
    }


    public static void main(String[] args) {
        System.out.println("Hello world");

        Stack stack = new Stack();
        stack.push("Hello");
        stack.push("World");
        System.out.println(stack.isEmpty());
        System.out.println(stack.pop());
        System.out.println(stack.pop());
        System.out.println(stack.pop());
    }
}