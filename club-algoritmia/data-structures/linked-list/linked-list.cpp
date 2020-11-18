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
        next = nullptr;
    }
};

class linkedList
{
    int size = 0;
    Node *head = nullptr;
    Node *tail = nullptr;

public:
    void pushBack(int value) // O(n)
    {
        Node *newNode = new Node(value);

        // If linked list is empty, the newNode will become the head and the tail.
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else // Appendind the new node to the end of the list
        {
            Node *temp = head;
            while (temp->next)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        ++size;
    }
    void pushFront(int value) // O(1)
    {
        Node *newNode = new Node(value);

        // If linked list is empty, the newNode will become the head and the tail.
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
        ++size;
    }
    void insertAt(int pos, int value)
    {
        if (pos < 0 or pos > size + 1)
        {
            return;
        }
        else if (pos == 0)
        {
            pushFront(value);
        }
        else if (pos == size)
        {
            pushBack(value);
        }
        else
        {
            Node *newNode = new Node(value);
            Node *temp = head;

            for (int i = 0; i < pos - 2; i++)
            {
                if (temp)
                {
                    temp = temp->next;
                }
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    void show()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->value << endl;
            temp = temp->next;
        }
    }
    int getSize()
    {
        return size;
    }
};

int main(int argc, char const *argv[])
{
    linkedList myList;
    myList.pushBack(10);
    myList.pushBack(20);
    myList.pushBack(30);
    myList.pushBack(40);
    myList.pushBack(50);
    myList.insertAt(2, 100);
    myList.show();
    cout << "Size is: " << myList.getSize() << endl;
    return 0;
}