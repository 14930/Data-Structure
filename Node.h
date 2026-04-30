#ifndef NODE_H
#define NODE_H

// define Node
struct Node {
    int data;     
    Node* next;  
    
    // Default constructor
    Node() {
        data = 0;
        next = nullptr;
    }

    // Parameterized constructor
    Node(int val) {
        data = val;
        next = nullptr;
    }
}; 

#endif