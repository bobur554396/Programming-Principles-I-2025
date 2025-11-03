# Lecture 8: STL (Part 1) – Containers

## 1. What is STL?
The **Standard Template Library (STL)** is a powerful set of C++ template classes to provide general-purpose classes and functions with templates that implement many popular and commonly used algorithms and data structures.

- **Components**:
  - **Containers**: Store data (vector, set, map, etc.)
  - (**Algorithms**: Sorting, searching, etc.)
  - (**Functions**: Functors, lambdas)
  - (**Iterators**: Pointer-like objects to traverse containers)

---

## 2. Containers Overview
STL containers are class templates that store collections of objects.

| Container | Ordered | Unique | Fast Lookup |
|---------|--------|--------|-----------|
| `vector` | No | No | O(1) by index |
| `set`    | Yes | Yes | O(log n) |
| `map`    | Yes | Yes (keys) | O(log n) |

---

## 3. Vector

`std::vector` is a dynamic array that can grow and shrink in size.

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
```

### 3.1 Key Functions
- `push_back(elm)` → Add element at end
- `begin(), end()` → Iterators
- `size()` → Number of elements
- `empty()` → Check if empty
- `at(index)` → Safe access
- `front(), back()` → First/last element
- `erase(pos)` → Remove element
- `clear()` → Remove all
- `insert(pos, elm)` → Insert at position

### 3.2 Given N Elements
```cpp
int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " ";

    cout << endl;
    return 0;
}
```

### 3.3 Sort with Custom Function
```cpp
bool desc(int a, int b) { 
    return a > b; 
}

int main() {
    vector<int> v = {5, 2, 8, 1};
    sort(v.begin(), v.end(), desc);

    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " "; // 8 5 2 1

    return 0;
}
```

### 3.4 Iterator Loop
```cpp
int main() {
    vector<int> v = {10, 20, 30};
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    return 0;
}
```

### 3.5 Erase & Clear
```cpp
int main() {
    vector<int> v = {1, 2, 3, 4};
    v.erase(v.begin() + 1);        // Remove 2
    v.erase(v.begin(), v.begin() + 2);  // Remove first two
    v.clear();                      // Empty vector
    cout << v.empty() << endl;      // 1 (true)
    return 0;
}
```

### 3.6 Insert
```cpp
int main() {
    vector<int> v = {1, 3};
    v.insert(v.begin() + 1, 2);  // {1, 2, 3}
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " ";

    return 0;
}
```

### 3.7 Read Until 0
```cpp
int main() {
    vector<int> v;
    int x;
    while (cin >> x && x != 0) {
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " ";

    return 0;
}
```

---

## 4. Set

`std::set` — ordered collection of **unique** elements.

```cpp
#include <set>
```

### 4.1 Key Functions
- `insert(elm)`
- `find(elm)` → returns iterator or `end()`
- `erase(elm)` or `erase(iterator)`
- `size()`, `empty()`, `clear()`

### 4.2 Example
```cpp
int main() {
    set<int> s;
    s.insert(30);
    s.insert(10);
    s.insert(30);  // Ignored (duplicate)

    if (s.find(10) != s.end()) {
        cout << "Found!" << endl;
    }

    for (int x : s) 
        cout << x << " ";  // 10 30
    return 0;
}
```

---

## 5. Map

`std::map` — ordered key-value pairs (like dictionary).

```cpp
#include <map>
#include <string>
```

### 5.1 What is `pair`?
```cpp
pair<string, int> p = {"Alice", 25};
cout << p.first << " " << p.second << endl;
```

### 5.2 Insert & Access
```cpp
int main() {
    map<string, int> m;
    m["Alice"] = 25;
    m.insert({"Bob", 30});

    cout << m["Alice"] << endl;  // 25
    return 0;
}
```

### 5.3 Student Points
```cpp
int main() {
    map<string, int> points;
    points["A"] = 95;
    points["B"] = 88;
    points["C"] = 92;

    string maxStudent;
    int maxPoints = -1;
    for (auto& p : points) {
        if (p.second > maxPoints) {
            maxPoints = p.second;
            maxStudent = p.first;
        }
    }
    cout << maxStudent << " has " << maxPoints << endl;
    return 0;
}
```

### 5.4 Count Letter Frequency
```cpp
int main() {
    string s;
    cin >> s;
    map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }
    for (auto& p : freq) {
        cout << p.first << ": " << p.second << endl;
    }
    return 0;
}
```

### 5.5 Read Map from Input
```cpp
int main() {
    int n;
    cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; i++) {
        string key; int val;
        cin >> key >> val;
        m[key] = val;
    }
    for (auto& p : m) {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}
```


---

## 7. Summary Table

| Feature | Vector | Set | Map |
|-------|------|-----|-----|
| Dynamic Size | Yes | Yes | Yes |
| Unique Elements | No | Yes | Yes (keys) |
| Ordered | Insertion order | Sorted | Sorted by key |
| Access by Index | O(1) | No | No |
| Lookup | O(n) | O(log n) | O(log n) |

---

## 8. Best Practices
- Use `vector` for simple lists
- Use `set` when you need **uniqueness + order**
- Use `map` for **key-value** mappings
- Always check `find()` before `erase()`
- Prefer `auto` in range-based loops
- Use `emplace` for efficiency (advanced)