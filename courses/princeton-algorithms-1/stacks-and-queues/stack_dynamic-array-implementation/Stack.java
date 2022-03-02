class Stack {
    private int N = 0;
    private String[] stackElements = new String[1];

    public void setCapacityStack(int size){   
        stackElements = new String[size];   
    }

    public boolean isEmpty() {   
        return N == 0;   
    }

    public void push(String item) {
        if(N == stackElements.length || N == 0) {
            resize(2 * stackElements.length);
            System.out.println("Size of N after push is: " + N);
        }
        stackElements[N] = item;
        N++;
    }

    public String pop() {
        String item = stackElements[--N];
        stackElements[N] = null;
        // If used slots are between 25% and 100% of the array.
        if(N > 0 && N == stackElements.length / 4) {
            resize(stackElements.length / 2);
            System.out.println("Size of N after pop is: " + N);
        }
        return item;
    }

    public void resize(int size) {
        String temp[] = new String[size];
        for(int i = 0; i < N; i++) {
            temp[i] = stackElements[i];
        }
        stackElements = temp;
    }

    public int size() {
        return N;
    }

    public static void main(String[] args) {

        Stack stack = new Stack();

        stack.push("Hello");
        stack.push("From");
        stack.push("Java");
        stack.push("This");
        stack.push("is");
        stack.push("message");

        int n = stack.size();

        for(int i = 0; i < n; i++) {
            System.out.println(stack.pop());            
        }

        n = stack.size();
        stack.push("message");
        System.out.println(stack.pop());            
        stack.push("message");
        stack.push("message");
        n = stack.size();




        System.out.println("Final size of N after pop is: " + n);
    }
}