#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"
#include <iostream>

int main() {
    LinkedList list;

    list.insertAtHead(10);
    list.insertAtHead(20);
    list.insertAtEnd(30);

    std::cout << "List after insertions: ";
    list.display(); // المتوقع: 20 -> 10 -> 30 -> NULL

    list.deleteValue(10);
    std::cout << "List after deleting 10: ";
    list.display(); // المتوقع: 20 -> 30 -> NULL


    /* =========================
       STACK TESTING (ADDED ONLY)
       ========================= */

    std::cout << "\n--- Stack Linked List Test ---\n";
    StackLL s1;

    s1.push(5);
    s1.push(10);
    s1.push(15);

    std::cout << "Top element: " << s1.peek() << std::endl;
    std::cout << "Pop: " << s1.pop() << std::endl;
    std::cout << "New Top: " << s1.peek() << std::endl;

    std::cout << "\n--- Stack Array Test ---\n";
    StackArray s2(5);

    s2.push(1);
    s2.push(2);
    s2.push(3);

    std::cout << "Top element: " << s2.peek() << std::endl;
    std::cout << "Pop: " << s2.pop() << std::endl;
    std::cout << "New Top: " << s2.peek() << std::endl;
    /* =========================
       QUEUE TESTING
       ========================= */
    std::cout << "\n--- Queue Linked List Test ---\n";
    QueueLinkedList q1;
    q1.enqueue(100);
    q1.enqueue(200);
    q1.enqueue(300);
    std::cout << "Dequeued: " << q1.dequeue() << std::endl; // Expected: 100
    std::cout << "Dequeued next: " << q1.dequeue() << std::endl; // Expected: 200

    std::cout << "\n--- Queue Array (Circular) Test ---\n";
    QueueArray q2(5);
    q2.enqueue(11);
    q2.enqueue(22);
    q2.enqueue(33);
    std::cout << "Dequeued: " << q2.dequeue() << std::endl; // Expected: 11
    std::cout << "Dequeued next: " << q2.dequeue() << std::endl; // Expected: 22

    std::cout << "\n====================================\n";
    std::cout << "All tests completed successfully!\n";
    std::cout << "====================================\n";
    return 0;
}