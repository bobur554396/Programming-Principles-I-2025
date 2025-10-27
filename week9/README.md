# Lecture 7: Functions in C++

## 1. What is a Function?
A **function** is a reusable block of code that performs a specific task. It helps organize code, reduce repetition, and improve readability.

- **Key Benefits**:
  - Code reusability
  - Easier debugging
  - Modular programming
  - Abstraction (hide implementation details)

## 2. Built-in Functions

C++ provides many **built-in functions** in standard libraries. You must include appropriate headers when they are needed.

### 2.1 `sort`, `reverse` (`<algorithm>`)
```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {5, 3, 8, 1};
    int n = 4;

    sort(arr, arr + n);           // Sort ascending
    for (int i = 0; i < n; i++) cout << arr[i] << " ";  // 1 3 5 8
    cout << endl;

    reverse(arr, arr + n);        // Reverse array
    for (int i = 0; i < n; i++) cout << arr[i] << " ";  // 8 5 3 1
    cout << endl;

    return 0;
}
```

### 2.2 `tolower`, `toupper` (`<cctype> - optional`)
```cpp
#include <iostream>
#include <cctype> // optional
using namespace std;

int main() {
    char c = 'A';
    cout << tolower(c) << endl;   // 'a'
    cout << toupper(c) << endl;   // 'A'

    char d = 'b';
    cout << toupper(d) << endl;   // 'B'
    return 0;
}
```

### 2.3 `isalpha`, `isdigit`, `isalnum`, `ispunct` (`<cctype>`)
```cpp
#include <iostream>
#include <cctype> // optional
using namespace std;

int main() {
    char ch = '5';
    cout << isdigit(ch) << endl;  // 1 (true)
    cout << isalpha(ch) << endl;  // 0 (false)
    cout << isalnum(ch) << endl;  // 1 (digit or letter)
    cout << ispunct('!') << endl; // 1 (punctuation)

    return 0;
}
```

### 2.4 `sqrt`, `max`, `min`, `pow` (`<cmath>`)
```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << sqrt(16) << endl;     // 4.0
    cout << pow(2, 3) << endl;    // 8.0
    cout << max(10, 20) << endl;  // 20
    cout << min(10, 20) << endl;  // 10

    return 0;
}
```

---

## 3. Intro to User-Defined Functions

### 3.1 Function Declaration and Definition

#### Before `main()` (Recommended)
```cpp
#include <iostream>
using namespace std;

// Declaration + Definition
void hello() {
    cout << "Hello!" << endl;
}

int main() {
    hello();  // Function call
    return 0;
}
```

#### After `main()` (Need Declaration First)
```cpp
#include <iostream>
using namespace std;

// Declaration (prototype)
void hello();

int main() {
    hello();  // Call
    return 0;
}

// Definition
void hello() {
    cout << "Hello!" << endl;
}
```

### 3.2 Function Parameters
```cpp
#include <iostream>
using namespace std;

void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet("Alice");
    greet("Bob");
    return 0;
}
```

### 3.3 Types of Functions
- **Returning a value** (`int`, `double`, etc.)
- **Void functions** (no return value)

```cpp
int sum(int a, int b) {
    return a + b;
}

void sayHi() {
    cout << "Hi!" << endl;
}
```

### 3.4 Local vs Global Variables
```cpp
#include <iostream>
using namespace std;

int global = 100;  // Global variable

void demo() {
    int local = 5;  // Local to function
    cout << "Local: " << local << endl;
    cout << "Global: " << global << endl;
}

int main() {
    demo();
    cout << "Global in main: " << global << endl;
    // cout << local;  // Error! local is not accessible
    return 0;
}
```

---

## 4. Examples

### 4.1 `hello` — Simple Function
```cpp
#include <iostream>
using namespace std;

void hello() {
    cout << "Hello!" << endl;
}

int main() {
    hello();
    return 0;
}
```

### 4.2 `hello name` — With Parameter
```cpp
#include <iostream>
using namespace std;

void hello(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    string name;
    cin >> name;
    hello(name);
    return 0;
}
```

### 4.3 `sum of two` — Return Value
```cpp
#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << "Sum: " << sum(x, y) << endl;
    return 0;
}
```

### 4.4 `max of two`
```cpp
#include <iostream>
using namespace std;

int maxOfTwo(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << "Max: " << maxOfTwo(x, y) << endl;
    return 0;
}
```

### 4.5 `my power` — Handle Negative Exponent
```cpp
#include <iostream>
using namespace std;

double power(double base, int exp) {
    if (exp < 0) {
        return 1.0 / power(base, -exp);
    }
    double result = 1.0;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    double b; int e;
    cin >> b >> e;
    cout << power(b, e) << endl;
    return 0;
}
```

### 4.6 `factorial`
```cpp
#include <iostream>
using namespace std;

long long factorial(int n) {
    long long res = 1;
    for(int i = 2; i <= n; i++)
        res *= i;

    return res;
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}
```

### 4.7 `isPrime`
```cpp
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    cout << (isPrime(n) ? "YES" : "NO") << endl;
    return 0;
}
```

### 4.8 `toUpper`, `toLower`, `isDigit` — Character Functions
```cpp
// Try to implement without builtin functions by yourself
#include <iostream>
#include <cctype>
using namespace std;

char toUpper(char c) {
    return toupper(c);
}

char toLower(char c) {
    return tolower(c);
}

bool isDigit(char c) {
    return isdigit(c);
}

int main() {
    char ch;
    cin >> ch;

    cout << "Upper: " << toUpper(ch) << endl;
    cout << "Lower: " << toLower(ch) << endl;
    cout << "Is digit: " << (isDigit(ch) ? "YES" : "NO") << endl;

    return 0;
}
```

---

## 5. Summary of Key Concepts

| Concept | Description |
|-------|-----------|
| **Function Declaration** | Tells compiler about function name, return type, parameters |
| **Function Definition** | Actual body of the function |
| **Parameters** | Inputs to the function |
| **Return Type** | Data type of value returned (`void` if none) |
| **Local Variable** | Defined inside function, scope limited to function |
| **Global Variable** | Defined outside, accessible everywhere |

---

## 6. Best Practices
- Always declare functions before use
- Avoid global variables when possible
- Keep functions small and focused on one task
- Use meaningful function and parameter names