#include "LinkedList.h"
class MyLinkedList : public LinkedList
{
public:
    void insertAtHead(int);
    void insertAtTail(int);
    void display();
    int deleteFromHead(int);
    int deleteFromTail(int);
	int deleteAValue(int);
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
int MyLinkedList::deleteFromHead(int value)
{
	if (head == nullptr && tail == nullptr)
	{
		cout << "Linked List empty." << endl;
		return -1;
	}
	else if (head == tail)
	{
		int rv = head->data;
		delete head;
		head = nullptr;
		tail = nullptr;
		return rv;
	}
	else if (head->data == value)
	{
		int rv = head->data;
		Node* temp = new Node;
		temp = head;
		head = head->next;
		temp->next = nullptr;
		delete temp;
		temp = nullptr;
		return rv;
	}
	else
	{
		cout << "Value not present on head." << endl;
		return -1;
	}

	

}
int MyLinkedList::deleteAValue(int value)
{
	if (head == nullptr && tail == nullptr)
	{
		cout << "Linked List empty." << endl;
		return -1;
	}
	else if (head == tail)
	{
		int rv = head->data;
		delete head;
		head = nullptr;
		tail = nullptr;
		return rv;

	}
	else if (head->data == value)
	{
		int rv = head->data;

		Node* temp = new Node;
		temp = head;
		head = head->next;
		delete temp;
		temp = nullptr;

	}
	else if (tail->data == value)
	{
		Node* temp = new Node;
		temp = head;

		while (temp->next != tail)
		{
			if (temp->next == tail)
			{
				int rv = tail->data;
				delete tail;
				tail = temp;
				tail->next = nullptr;
				temp = nullptr;
				return rv;
			}
			temp = temp->next;
		}
	}
	else
	{
		Node* temp = new Node;
		temp = head;

		while (temp->data != value)
		{
			if (temp->data == value)
			{
				//incomplete
				//delete in middle and not found
			}
			temp = temp->next;
		}

	}
}