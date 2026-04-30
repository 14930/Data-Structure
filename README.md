# 🚀 Data Structures Mastery in C++

This repository contains a robust implementation of fundamental data structures: **Singly Linked Lists**, **Stacks**, and **Queues**. Each structure is implemented using both dynamic memory (Linked Lists) and static-style memory (Arrays) to demonstrate different memory management strategies.

---

## 🛠 Project Architecture
The project follows professional C++ standards by separating interface from implementation:
- **`.h` files**: Class declarations and blueprints.
- **`.cpp` files**: Logic and functional implementation.
- **`main.cpp`**: Comprehensive test suite.

---

## 📚 Data Structures Implemented

### 1. Singly Linked List
A dynamic chain of nodes.
- **Operations**: Insertion (Head/End), Deletion by value, and Display.
- **Memory**: Features a recursive-style destructor to ensure zero memory leaks by manually deallocating every `Node`.

### 2. Stack (LIFO)
- **StackLL**: Uses a Linked List. Operations at the "top" are $O(1)$.
- **StackArray**: Uses a dynamically allocated array. Includes "Overflow" protection.

### 3. Queue (FIFO)
- **QueueLinkedList**: Uses `front` and `rear` pointers to ensure $O(1)$ enqueue and dequeue times.
- **QueueArray (Circular)**: Implements a **Circular Buffer**. 
    - Uses the formula: `index = (index + 1) % capacity`.
    - This prevents "false overflows" and reuses empty slots at the start of the array.

---

## 🗝️ Key C++ Concepts Used

### 🔹 Pointers & Dynamic Memory
We utilize `new` for dynamic allocation and `delete` for manual memory reclamation. This is critical for building structures that grow and shrink at runtime.

### 🔹 Encapsulation
Data members like `head`, `front`, and `rear` are kept `private`. Users interact with the data only through `public` methods, protecting the integrity of the structure.

### 🔹 Constructors & Destructors
- **Constructors**: Initialize pointers to `nullptr` and counters to `0` to prevent "garbage" data.
- **Destructors**: The "clean-up crew." Essential for preventing memory leaks in long-running applications.

---

## 🚀 How to Run

1. **Compile**:
   ```bash
   g++ main.cpp LinkedList.cpp Stack.cpp Queue.cpp -o dsa_test