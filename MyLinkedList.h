#include "LinkedList.h"
class MyLinkedList : public LinkedList
{
public:
    void insertAtHead(int);
    void insertAtTail(int);
    void display();
    int deleteFromHead();
    int deleteFromTail();
};
void MyLinkedList::insertAtHead(int val)
{
    Node *newNode;
    newNode = new Node;
    newNode->data = val;
    newNode->next = nullptr;
    if (head == nullptr && tail == nullptr)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}
void MyLinkedList::insertAtTail(int val)
{
    Node *newNode;
    newNode = new Node;
    newNode->data = val;
    newNode->next = nullptr;
    if (head == nullptr && tail == nullptr)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
        tail->next = nullptr;
    }
}
void MyLinkedList::display()
{
    if (head == nullptr && tail == nullptr)
    {
        cout << "LinkedList does not exist." << endl;
    }
    else if (head == tail)
    {
        cout << head->data << endl;
    }
    else
    {
        Node *temp;
        temp = new Node;
        temp = head;

        while (1)
        {
            if (temp == nullptr)
            {
                break;
            }
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
}