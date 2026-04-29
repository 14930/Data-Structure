#include "LinkedList.h"
#include "Stack.h"
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

    return 0;
}