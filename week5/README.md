# Lecture 4: Arrays

## 1. What is an Array?
An array is a data structure that stores a fixed-size sequence of elements of the same type in contiguous memory locations. It allows efficient access to elements using indices (starting from 0).

## 2. Types of Arrays
- **One-Dimensional Array (1D)**: A single row of elements (e.g., `int arr[5];`).
- **Multi-Dimensional Array**: Arrays of arrays (e.g., `int matrix[3][3];` for a 3x3 matrix).
- **Dynamic Arrays**: Size determined at runtime (e.g., using `std::vector` in C++).
- **Array of Characters (Strings)**: Array of `char` elements, typically null-terminated (`\0`).

## 3. Array Declaration
- **Syntax** (C++):
  ```cpp
  dataType arrayName[size];
  ```
- **Example**:
  ```cpp
  int arr[5];         // Array of 5 integers
  char str[10];       // Array of 10 characters
  int matrix[2][3];   // 2D array (2 rows, 3 columns)
  ```

## 4. Accessing an Element of an Array
- Use index (0-based) to access or modify elements.
- **Syntax**:
  ```cpp
  arrayName[index];
  ```
- **Example**:
  ```cpp
  int arr[3] = {10, 20, 30};
  cout << arr[1]; // Outputs 20
  arr[1] = 25;    // Updates index 1 to 25
  ```

## 5. Searching in an Array
- **Linear Search**: Check each element sequentially to find a key.
  - Time Complexity: O(n)

## 6. 1D Array Samples
Below are simple examples demonstrating common array operations in C++.

### 6.1 Read n numbers and Show Them
```cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
```

### 6.2 Sum of All Elements in an Array
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n], sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum: " << sum << endl;
    return 0;
}
```

### 6.3 Create Array with Size n and Read n Elements
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
```

### 6.4 Show Even numbers from Given Array
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
```

### 6.5 Show numbers in Odd Positions from Given Array
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i += 2) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
```

### 6.6 Count number of Positive numbers in Array
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n], count = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > 0) {
            count++;
        }
    }
    cout << "Positive numbers: " << count << endl;
    return 0;
}
```

### 6.7 Find Max/Min from Given Array
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    cout << "Max: " << max << ", Min: " << min << endl;
    return 0;
}
```

### 6.8 Linear Search of K from Given Array
#### Simple Version
```cpp
#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> k;
    for (int i = 0; i < n; i++) {
        if (arr[i] == l) {
            cout << "Found at index: " << i << endl;
            return 0;
        }
    }
    cout << "not found" << endl;
    return 0;
}
```

#### With Bool
```cpp
#include <iostream>
using namespace std;

int main() {
    int n, K;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> K;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == K) {
            cout << "Found at index: " << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "not found" << endl;
    }
    return 0;
}
```

### 6.9 Find number K and Remove It, Shift Left, Add 0 at End
```cpp
#include <iostream>
using namespace std;

int main() {
    int n, K;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> K;
    for (int i = 0; i < n; i++) {
        if (arr[i] == K) {
            continue;
        }
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
```

## 7. String as an Array of Characters
A string in C++ can be an array of characters (`char[]`) terminated by `\0` or a `std::string` object.

### 7.1 String Size/Length
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    cout << "Size: " << s.size() << endl;    // Outputs size
    cout << "Length: " << s.length() << endl; // Same as size
    return 0;
}
```

### 7.2 Show All Digits from String
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (char c : s) {
        if (c >= '0' && c <= '9') {
            cout << c << " ";
        }
    }
    cout << endl;
    return 0;
}
```

### 7.3 Convert All Letters to Uppercase
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (char c : s) {
        if(c >= 'a' && c <= 'z')
          cout << char(c - 32);
        else
          cout << c;
    }
    return 0;
}
```