#include "iostream"
using namespace std;
class MyLinkedList
{
private:
    struct Node
    {
        int val;
        Node *next;
        // Node(int x) : val(x), next(nullptr) {}
    };
    Node *head;
    Node *tail;
    int size;

public:
    /** Initialize your data structure here. */
    MyLinkedList()
    {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    /** Get the value of the index-th Node in the linked list. If the index is invalid, return -1. */
    int get(int index)
    {
        if (index >= size || index < 0)
        {
            return -1;
        }
        Node *cur = new Node();
        cur = head;

        for (int i = 0; i < index; ++i)
        {
            cur = cur->next;
        }

        return cur->val;
    }

    /** Add a Node of value val before the first element of the linked list. After the insertion, the new Node will be the first Node of the linked list. */
    void addAtHead(int val)
    {
        Node *temp = new Node();
        temp->val = val;
        temp->next = head;
        head = temp;
        if (size == 0)
        {
            tail = temp;
        }
        ++size;
    }

    /** Append a Node of value val to the last element of the linked list. */
    void addAtTail(int val)
    {
        Node *temp = new Node();
        temp->val = val;
        if (size == 0)
        {
            tail = temp;
            head = temp;
        }
        tail->next = temp;
        tail = temp;
        ++size;
    }

    /** Add a Node of value val before the index-th Node in the linked list. If index equals to the length of linked list, the Node will be appended to the end of linked list. If index is greater than the length, the Node will not be inserted. */
    void addAtIndex(int index, int val)
    {
        if (index > size || index < 0)
            return;
        else if (index == 0)
        {
            addAtHead(val);
            return;
        }
        else if (index == size)
        {
            addAtTail(val);
            return;
        }
        Node *cur = new Node();
        cur = head;
        for (int i = 0; i < index - 1; ++i)
        {
            cur = cur->next;
        }
        Node *temp = new Node();
        temp->val = val;
        temp->next = cur->next;
        cur->next = temp;
        ++size;
    }

    /** Delete the index-th Node in the linked list, if the index is valid. */
    void deleteAtIndex(int index)
    {
        if (index >= size || index < 0)
            return;
        else if (index == 0)
        {
            head = head->next;
            --size;
            return;
        }
        Node *cur = new Node();
        cur = head;
        for (int i = 0; i < index - 1; ++i)
        {
            cur = cur->next;
        }
        cur->next = cur->next->next;
        if (index == size - 1)
            tail = cur;
        --size;
    }
};