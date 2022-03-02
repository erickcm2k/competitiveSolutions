#include <iostream>
#include <list>
using namespace std;

class Node {
  public:
    int data;
    Node *next;
};


class LinkedList {

  private:

    Node *head = NULL;
    Node *tail = NULL;
    int listSize = 0;

  public:

    void pushFront(int item) {
      Node *temp = new Node();
      temp->data = item;
      temp->next = head;
      listSize++;     
      if(head == NULL) {
        head = temp;
        tail = temp;
      }
      head = temp;
    } 


    void pushBack(int item) {

      Node *temp = new Node();
      temp->data = item;
      temp->next = NULL;
      listSize++;
      // If head is empty, temp will become the first node.
      if(head == NULL) {
        head = temp;
        tail = temp;
        // This line down prevents memory leaks.
        temp = NULL;
      } else {
        tail->next = temp;
        tail = temp;
      }

    }

    void insertAt(int item, int pos) {
      // If given index is negative or greater than list size.
      if(pos < 0 || pos - 1 > listSize) {
        return;
      }

      // The same action as push front.
      if(pos == 0) {
        pushFront(item);
        return;
      }
      
      // The same action as push back.
      if(pos - 1 == listSize) {
        pushBack(item);
        return;
      }

      Node *prev = new Node();
      Node *current = new Node();
      Node *temp = new Node();
      listSize++;
      current = head;

      for(int i = 1; i < pos; i++) {
        prev = current;
        current = current->next;
      }

      temp->data = item;
      prev->next = temp;
      temp->next = current;
    }

    void printList() {
      while(head) {
        cout << head->data << endl;
        head = head->next;
      }
    }

    // Check
    void clearList() {
      Node *temp;
      while(head) {
        temp = head;
        temp = head->next;
        head = NULL;
      }
      listSize = 0;
    }

    int getHead() {
      return head->data;
    }

    int getTail() {
      return tail->data;
    }

    int len() {
      return listSize;
    }

    bool empty() {
      return listSize == 0;
    }

};

int main() {

  LinkedList list;
  list.pushBack(10);
  list.pushBack(20);
  list.pushBack(30);
  list.pushBack(40);
  list.pushBack(50);
  list.insertAt(1000, 5);
  list.insertAt(0, 123);

  list.printList();

  cout << "Tail is: " << list.getTail() << endl;
  cout << "Size = " << list.len() << endl;

  return 0;
}