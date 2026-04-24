#include "LinkedList.h"
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

    return 0;
}