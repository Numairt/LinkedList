#include "Node.h"
class LinkedList
{
protected:
    Node *head;
    Node *tail;

public:
    LinkedList();
    virtual void insertAtHead(int val) = 0;
    virtual void insertAtTail(int val) = 0;
    virtual void display() = 0;
    // virtual int deleteFromHead(int val) = 0;
    // virtual int deleteFromTail(int val) = 0;
};

LinkedList::LinkedList()
{
    head = nullptr;
    tail = nullptr;
}