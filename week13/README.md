# Lecture 10: Struct & Pointers

## 1. What is a Pointer?

A **pointer** is a variable that stores the **memory address** of another variable.

### 1.1 Declaring Pointers
```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr = &x;        // ptr holds address of x

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;

    *ptr = 50;            // Change x through pointer
    cout << "New x: " << x << endl;  // 50

    return 0;
}
```

### 1.2 Array as Function Argument (Pointer)
```cpp
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";     // Same as *(arr + i)
    }
    cout << endl;
}

int main() {
    int a[] = {1, 2, 3, 4};
    printArray(a, 4);  // Array decays to pointer
    return 0;
}
```

### 1.3 Fill Array Using Pointer
```cpp
int main() {
    int n = 5;
    int arr[5];
    int* p = arr;  // Same as &arr[0]

    for (int i = 0; i < n; i++) {
        *(p + i) = i * 10;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // 0 10 20 30 40
    }
    return 0;
}
```

### 1.4 Looping Through Array Using Pointers
```cpp
int main() {
    int arr[] = {10, 20, 30, 40};
    int* p = arr;

    // Using pointer arithmetic
    for (int i = 0; i < 4; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;

    // Using pointer increment
    while (p < arr + 4) {
        cout << *p << " ";
        p++;
    }
    return 0;
}
```

---

## 2. What is `struct`?

A **struct** (structure) is a user-defined data type that groups related variables (members) together.

### 2.1 Basic Student Example
```cpp
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    string id;
    double gpa;
};

int main() {
    Student s;
    s.name = "Bob";
    s.id = "25B001";
    s.gpa = 3.8;

    cout << s.name << " " << s.gpa << endl;
    return 0;
}
```

### 2.2 Simple Read Student Data
```cpp
int main() {
    Student s;
    cin >> s.name >> s.id >> s.gpa;
    cout << "Name: " << s.name << endl;
    cout << "GPA: " << s.gpa << endl;
    return 0;
}
```

### 2.3 freopen — Read from File
```cpp
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int id;
    double gpa;
};

int main() {
    freopen("input.txt", "r", stdin);

    Student s;
    cin >> s.name >> s.id >> s.gpa;

    cout << "Student: " << s.name << ", GPA: " << s.gpa << endl;
    return 0;
}
```

### 2.4 toString() Function
```cpp
struct Student {
    string name;
    int id;
    double gpa;

    void print() {  // Member function
        cout << name << " (ID: " << id << ") GPA: " << gpa << endl;
    }
};

int main() {
    Student s = {"Bob", "25B001", 3.9};
    s.print();
    return 0;
}
```

### 2.5 Sort Students by GPA
```cpp
#include <algorithm>

bool cmp(const Student& a, const Student& b) {
    return a.gpa > b.gpa;  // Descending GPA
}

int main() {
    Student arr[3] = {
        {"Alice", "25B001", 3.8},
        {"Bob", "25B002", 4.0},
        {"Charlie", "25B003", 3.5}
    };

    sort(arr, arr + 3, cmp);

    for (int i = 0; i < 3; i++) {
        arr[i].print();
    }
    return 0;
}
```

### 2.6 Find Student by Name
```cpp
int main() {
    Student students[3] = {
        {"Alice", "25B001", 3.8},
        {"Bob", "25B002", 4.0},
        {"Charlie", "25B003", 3.5}
    };

    string target = "Bob";
    for (int i = 0; i < 3; i++) {
        if (students[i].name == target) {
            cout << "Found: ";
            students[i].print();
            break;
        }
    }
    return 0;
}
```

### 2.7 Find All Students with GPA Above Threshold
```cpp
int main() {
    Student students[3] = { /* ... */ };
    double threshold = 3.7;

    cout << "High GPA students:" << endl;
    for (int i = 0; i < 3; i++) {
        if (students[i].gpa >= threshold) {
            students[i].print();
        }
    }
    return 0;
}
```

### 2.8 Point Example (2D Point)
```cpp
struct Point {
    int x, y;

    void print() {
        cout << "(" << x << ", " << y << ")" << endl;
    }

    double distanceFromOrigin() {
        return sqrt(x*x + y*y);
    }
};

int main() {
    Point p = {3, 4};
    p.print();                    // (3, 4)
    cout << "Distance: " << p.distanceFromOrigin() << endl;  // 5
    return 0;
}
```

### 2.9 Struct in Header File (`student.h`)
**student.h**
```cpp
#include <string>
using namespace std;

struct Student {
    string name;
    int id;
    double gpa;

    void print() {
        cout << name << " GPA: " << gpa << endl;
    };
};
```

**main.cpp**
```cpp
#include "student.h"

int main() {
    Student s = {"Alice", 1, 3.9};
    s.print();
    return 0;
}
```

---

## Summary Table

| Concept             | Syntax Example                  | Purpose |
|---------------------|----------------------------------|-------|
| Pointer Declaration | `int* p = &x;`                  | Store address |
| Dereference         | `*p = 10;`                      | Access value |
| Array → Pointer     | `func(arr, n)`                  | Pass array |
| Struct              | `struct Student { ... };`       | Group data |
| Member Access       | `s.name`, `s.print()`           | Use fields/methods |
| Pointer to Struct   | `Student* ptr = &s;`            | Dynamic objects |

---

## Best Practices
- Always initialize pointers
- Use `const` with pointers when data shouldn’t change
- Prefer `struct` over multiple parallel arrays
- Use header files for large projects
- Use member functions for behavior (like `print()`)