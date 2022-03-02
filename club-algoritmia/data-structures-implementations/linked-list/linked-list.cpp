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

class linkedList
{
    int size = 0;
    Node *head = NULL;
    Node *tail = NULL;

public:
    void pushBack(int value) // O(n)
    {
        Node *newNode = new Node(value);

        // If list is empty, the newNode will become the head and the tail.
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else // Appending the new node to the end of the list
        {
            Node *temp = head;
            while (temp->next)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            tail = temp->next;
        }
        ++size;
    }

    void pushFront(int value) // O(1)
    {
        Node *newNode = new Node(value);

        // If list is empty, the newNode will become the head and the tail.
        if (head == NULL)
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

    void insertAt(int pos, int value) //O(n)
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

    void popBack() // O(n)
    {
        if (head == NULL)
        {
            return;
        }
        else if (head->next == NULL)
        {

            head = NULL;
        }
        else
        {
            Node *temp = head;

            for (int i = 0; i < size - 2; i++)
            {
                temp = temp->next;
            }

            temp->next = NULL;
            temp = NULL;
        }
        --size;
    }

    void popFront() // O(1)
    {
        if (head == NULL)
        {
            return;
        }
        else if (head->next == NULL)
        {
            head = NULL;
        }
        else
        {
            Node *temp = head;
            head = temp->next;
            temp = NULL;
        }
        --size;
    }
    void popAt(int pos) // O(1)
    {
        if (head == NULL)
        {
            return;
        }
        else if (head->next == NULL)
        {
            head = NULL;
        }
        else
        {
            Node *temp = head;
            head = temp->next;
            temp = NULL;
        }
        --size;
    }
    int getHead()
    {
        return head->value;
    }

    int getTail()
    {
        return tail->value;
    }

    Node *getRoot()
    {
        return head;
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

linkedList mergeLists(linkedList A, linkedList B)
{
    linkedList mergedList;
    Node *tempA = A.getRoot();
    Node *tempB = B.getRoot();
    // Caso 1, lista A está vacía.
    if (!tempA)
    {
        // Insertar todos los elementos de B en la nueva lista.
        while (tempB)
        {
            mergedList.pushBack(tempB->value);
            tempB = tempB->next;
        }
    }

    // Caso 2, lista B está vacía.
    if (!tempB)
    {
        // Insertar todos los elementos de A en la nueva lista.
        while (tempA)
        {
            mergedList.pushBack(tempA->value);
            tempA = tempA->next;
        }
    }

    // Caso 3, listas del mismo tamaño.
    while (tempA and tempB)
    {
        // insertar elemento de A en lista nueva
        mergedList.pushBack(tempA->value);
        tempA = tempA->next;
        // insertar elemento de B en lista nueva
        mergedList.pushBack(tempB->value);
        tempB = tempB->next;
    }

    // Caso 4, listas de diferente tamaño.
    if (tempA)
    {
        // Insertar los elementos restantes de A en la nueva lista
        while (tempA)
        {
            mergedList.pushBack(tempA->value);
            tempA = tempA->next;
        }
    }
    if (tempB)
    {
        // Insertar los elementos restantes de B en la nueva lista
        while (tempB)
        {
            mergedList.pushBack(tempB->value);
            tempB = tempB->next;
        }
    }
    return mergedList;
}

int main(int argc, char const *argv[])
{
    linkedList listA;
    listA.pushBack(10);
    listA.pushBack(20);
    listA.pushBack(30);

    linkedList listB;
    listB.pushBack(40);
    // listB.pushBack(50);
    // listB.pushBack(60);

    linkedList mergedList = mergeLists(listA, listB);
    mergedList.show();
    // cout << "Head is: " << myList.getHead() << endl;
    // // cout << "Tail is: " << myList.getTail() << endl;
    // myList.show();
    // cout << "Size is: " << myList.getSize() << endl;
    return 0;
}

