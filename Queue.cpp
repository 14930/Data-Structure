#include "Queue.h"

/* =========================
   QUEUE - CIRCULAR ARRAY
   ========================= */

QueueArray::QueueArray(int size) {
    capacity = size;
    arr = new int[capacity];
    front = 0;
    rear = -1;
    count = 0;
}

QueueArray::~QueueArray() {
    delete[] arr;
}

bool QueueArray::isFull() {
    return count == capacity;
}

bool QueueArray::isEmpty() {
    return count == 0;
}

void QueueArray::enqueue(int value) {
    if (isFull()) {
        std::cout << "Queue Overflow (Array)\n";
        return;
    }
    // Wrap rear around using modulo; this is what makes it circular
    rear = (rear + 1) % capacity;
    arr[rear] = value;
    count++;
}

int QueueArray::dequeue() {
    if (isEmpty()) {
        std::cout << "Queue Underflow (Array)\n";
        return -1;
    }
    int value = arr[front];
    // Wrap front around using modulo; reclaims space at the start
    front = (front + 1) % capacity;
    count--;
    return value;
}
QueueLinkedList::QueueLinkedList() {
    front = rear = nullptr;
}

QueueLinkedList::~QueueLinkedList() {
    while (!isEmpty()) {
        dequeue();
    }
}

void QueueLinkedList::enqueue(int value) {
    // FIXED: Added "Node* newNode = new" to allocate memory
    Node* newNode = new Node(value); 
    
    if (rear) {
        rear->next = newNode;
    }
    rear = newNode;
    
    if (!front) {
        front = rear; // First element
    }
}

int QueueLinkedList::dequeue() {
    if (isEmpty()) {
        std::cout << "Queue Underflow (Linked List)\n";
        return -1;
    }
    
    int value = front->data;
    Node* temp = front;
    front = front->next;
    delete temp;
    
    if (!front) {
        rear = nullptr; // Queue is now empty
    }
    return value;
}

bool QueueLinkedList::isEmpty() {
    return front == nullptr;
}

bool QueueLinkedList::isFull() {
    return false; // Linked list implementation is never full (limited by memory)
}