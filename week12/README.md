# Lecture 9: STL (Part 2) – Stack, Queue, Deque

## 1. Overview
In this lecture, we cover three fundamental **adapter containers** from the C++ Standard Template Library (STL):

| Container | Underlying Structure | Access Pattern | Key Feature |
|---------|----------------------|----------------|-------------|
| `stack`   | Usually `deque` or `vector` | LIFO (Last In, First Out) | Only top element accessible |
| `queue`   | Usually `deque`         | FIFO (First In, First Out) | Access front and back |
| `deque`   | Double-ended queue      | Both ends              | Fast insert/remove from both sides |

All require:
```cpp
#include <stack>
#include <queue>
#include <deque>
```

---

## 2. Stack – LIFO (Last In, First Out)

### Key Operations
| Function     | Description                            | Time Complexity |
|--------------|----------------------------------------|-----------------|
| `push(x)`    | Add element to top                     | O(1)            |
| `pop()`      | Remove top element                     | O(1)            |
| `top()`      | Access top element (no remove)         | O(1)            |
| `empty()`    | Check if stack is empty                | O(1)            |
| `size()`     | Return number of elements              | O(1)            |

### Example: Validating Balanced Brackets
```cpp
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '[') {
            st.push(c);
        } else {
            if (st.empty()) return false;
            char top = st.top();
            st.pop();
            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[')) {
                return false;
            }
        }
    }
    return st.empty();
}

int main() {
    string s;
    cin >> s;
    cout << (isValid(s) ? "YES" : "NO") << endl;
    return 0;
}
```

Input: `([])` → Output: `YES`  
Input: `([)]` → Output: `NO`

---

## 3. Queue – FIFO (First In, First Out)

### Key Operations
| Function     | Description                            |
|--------------|----------------------------------------|
| `push(x)`    | Add element to back                    |
| `pop()`      | Remove element from front              |
| `front()`    | Access front element                   |
| `back()`     | Access back element                    |
| `empty()`    | Check if empty                         |
| `size()`     | Number of elements                     |

### Example: Simple Queue Usage
```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    // Output: 10 20 30
    cout << endl;
    return 0;
}
```

---

## 4. Deque – Double-Ended Queue

Supports fast insertion and removal from **both ends**.

### Key Operations
| Function         | Description                            |
|------------------|----------------------------------------|
| `push_back(x)`   | Add to back                            |
| `push_front(x)`  | Add to front                           |
| `pop_back()`     | Remove from back                       |
| `pop_front()`    | Remove from front                      |
| `front()`, `back()` | Access ends                         |
| `empty()`, `size()` | Standard checks                     |
| `operator[]`     | Random access (like vector)            |

### Example: Deque as Flexible Container
```cpp
#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;
    dq.push_back(10);   // [10]
    dq.push_front(5);   // [5, 10]
    dq.push_back(20);   // [5, 10, 20]

    cout << "Front: " << dq.front() << endl;  // 5
    cout << "Back: " << dq.back() << endl;    // 20

    dq.pop_front();     // [10, 20]
    dq.pop_back();      // [10]

    cout << dq[0] << endl;  // Direct access: 10
    return 0;
}
```

### Deque as Sliding Window (Common Use Case)
```cpp
// Keep last 3 elements only
deque<int> window;
int x;
while (cin >> x) {
    window.push_back(x);
    if (window.size() > 3) {
        window.pop_front();
    }
    // window always has last 3 numbers
}
```

---

## 5. Comparison Table

| Feature              | Stack           | Queue           | Deque              |
|----------------------|-----------------|-----------------|---------------------|
| Access               | Top only        | Front & Back    | Both ends + random |
| Insert               | Top             | Back            | Front & Back       |
| Remove               | Top             | Front           | Front & Back       |
| Random Access        | No              | No              | Yes (`operator[]`) |
| Underlying Container | `deque` (default) | `deque`       | Self               |
| Typical Use          | Undo, recursion, parentheses | BFS, scheduling | Sliding window, flexible queue |

---

## 6. Common Real-World Applications

| Data Structure | Application Examples                          |
|----------------|-----------------------------------------------|
| `stack`        | Function call stack, undo-redo, expression evaluation, bracket matching |
| `queue`        | BFS in graphs, printer queue, task scheduling, level-order traversal |
| `deque`        | Sliding window problems, implementing queue/stack efficiently, dynamic buffers |

---

## 7. Best Practices
- Use `stack` when you need **LIFO**
- Use `queue` for **FIFO** behavior
- Use `deque` when you need to add/remove from **both ends** or need random access
- Always check `empty()` before calling `top()`, `front()`, or `pop()`
- Prefer `deque` over `vector` if frequent `push_front` is needed