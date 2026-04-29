#ifndef STACK_H
#define STACK_H

#include "Node.h"
#include <iostream>
using namespace std;

class StackLL {
private:
    Node* top;

public:
    StackLL();
    ~StackLL();

    void push(int value);
    int pop();
    int peek();
    bool isEmpty();
};

class StackArray {
private:
    int* arr;
    int topIndex;
    int capacity;

public:
    StackArray(int size = 100);
    ~StackArray();

    void push(int value);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();
};

#endif