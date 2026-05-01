#include "Stack.h"

/*STACK - LINKED LIST */

StackLL::StackLL() {
    top = nullptr;
}

StackLL::~StackLL() {
    while (!isEmpty()) {
        pop();
    }
}

bool StackLL::isEmpty() {
    return top == nullptr;
}

void StackLL::push(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

int StackLL::pop() {
    if (isEmpty()) {
        std::cout << "Stack Underflow (Linked List)\n";
        return -1;
    }

    Node* temp = top;
    int value = top->data;
    top = top->next;
    delete temp;
    return value;
}

int StackLL::peek() {
    if (isEmpty()) {
        std::cout << "Stack is empty (Linked List)\n";
        return -1;
    }
    return top->data;
}

/* STACK - ARRAY*/

StackArray::StackArray(int size) {
    capacity = size;
    arr = new int[capacity];
    topIndex = -1;
}

StackArray::~StackArray() {
    delete[] arr;
}

bool StackArray::isFull() {
    return topIndex == capacity - 1;
}

bool StackArray::isEmpty() {
    return topIndex == -1;
}

void StackArray::push(int value) {
    if (isFull()) {
        std::cout << "Stack Overflow (Array)\n";
        return;
    }
    arr[++topIndex] = value;
}

int StackArray::pop() {
    if (isEmpty()) {
        std::cout << "Stack Underflow (Array)\n";
        return -1;
    }
    return arr[topIndex--];
}

int StackArray::peek() {
    if (isEmpty()) {
        std::cout << "Stack is empty (Array)\n";
        return -1;
    }
    return arr[topIndex];
}