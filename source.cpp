#include "MyLinkedList.h"
int main()
{
    MyLinkedList Obj;

    Obj.insertAtTail(5);
    cout << "Display" << endl;
    Obj.display();
    Obj.insertAtTail(77);
    Obj.insertAtTail(4);
    Obj.insertAtTail(22);
    Obj.insertAtTail(99);
    cout << "Display" << endl;
    Obj.display();
    Obj.insertAtHead(111);
    cout << "Display" << endl;
    Obj.display();
    return 0;
}