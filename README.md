# Data-Structure

## What's Done ✅
The **Singly Linked List** is fully implemented:
- `insertAtHead()`, `insertAtEnd()`, `deleteValue()`, `display()`
- Proper memory management with destructor
- Modular structure (`.h` / `.cpp` separated)

---

## What You Need to Complete
| File | What to implement |
|------|-------------------|
| `Stack.h` / `Stack.cpp` | `StackArray` and `StackLinkedList` → `push()`, `pop()`, `peek()`, `isEmpty()` |
| `Queue.h` / `Queue.cpp` | `QueueArray` (Circular) and `QueueLinkedList` → `enqueue()`, `dequeue()`, `isFull()`, `isEmpty()` |
| `main.cpp` | Add test cases for Stack and Queue (LinkedList tests are already there) |

---

## How to Compile & Run
```powershell
g++ main.cpp LinkedList.cpp Stack.cpp Queue.cpp -o dsa_test
.\dsa_test
```

---

## ⚠️ Important — Read Before You Start

**1. Keep `.h` and `.cpp` separate**
`.h` = declarations only. `.cpp` = actual code. Don't mix them.

**2. Destructor `~` is NOT optional**
```cpp
LinkedList();   // Constructor
~LinkedList();  // Destructor ← missing ~ will break compilation
```

**3. Include guards in every `.h` file**
```cpp
#ifndef STACK_H
#define STACK_H
// ...
#endif
```

**4. Every `new` must have a `delete`**
Free all nodes in the destructor — check `LinkedList.cpp` as a reference.
