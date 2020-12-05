#include "iostream"
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int x)
    {
        value = x;
        next = NULL;
    }
};

class Stack
{
    int size = 0;
    Node *top = NULL;

public:
    void push(int data)
    {
        Node *newNode = new Node(data);
        if (top == NULL)
        {
            top = newNode;
        }
        else
        {
            newNode->next = top;
            top = newNode;
        }
        ++size;
    }

    void pop()
    {
        if (top == NULL)
        {
            return;
        }
        else
        {
            top = top->next;
            --size;
        }
    }
    void show()
    {
        Node *temp = top;
        while (temp)
        {
            cout << temp->value << endl;
            temp = temp->next;
        }
    }
};

int main(int argc, char const *argv[])
{
    Stack myStack;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.pop();
    myStack.push(40);
    myStack.show();
    return 0;
}
