#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList {
private:
    Node* head; 
public:
    LinkedList();   // (Constructor)
    ~LinkedList();  // (Destructor)

    void insertAtHead(int value);
    void insertAtEnd(int value);
    void deleteValue(int value);
    void display();
};

#endif