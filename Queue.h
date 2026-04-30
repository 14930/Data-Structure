#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h"
#include <iostream>
using namespace std;

class QueueArray {
private:
    int* arr;
    int front;
    int rear;
    int capacity;
    int count; // tracks number of elements

public:
    QueueArray(int size = 100);
    ~QueueArray();

    void enqueue(int value);
    int dequeue();
    bool isFull();
    bool isEmpty();
};
class QueueLinkedList {
private:
    Node* front;
    Node* rear; 
public:
    QueueLinkedList();
    ~QueueLinkedList();
    void enqueue(int value);
    int dequeue();
    bool isEmpty();
    bool isFull();
};

#endif
