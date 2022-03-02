class Stack {
    private String[] s = new String[0];
    private int N = 0;

    public void FixedCapacityStack(int size){   
        s = new String[size];   
    }

    public boolean isEmpty() {   
        return s.length == 0;   
    }

    public void push(String item) {
        s[N++] = item;
    }

    public String pop() {
        return s[--N];
    }

    public static void main(String[] args) {

        Stack stack = new Stack();
        System.out.println(stack.isEmpty());
        stack.FixedCapacityStack(10);
        System.out.println(stack.isEmpty());

        stack.push("Hello");
        stack.push("From");
        stack.push("Java");
        System.out.println(stack.pop());

    }
}