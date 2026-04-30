#ifndef NODE_H
#define NODE_H

// define Node
struct Node {
    int data;     
    Node* next;  
    
    // Default constructor (This fixes the LinkedList and Stack errors!)
    Node() {
        data = 0;
        next = nullptr;
    }

    // Parameterized constructor (This fixes the Queue error!)
    Node(int val) {
        data = val;
        next = nullptr;
    }
}; 

#endif