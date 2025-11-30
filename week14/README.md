# Lecture 11: Recursion

## 1. What is Recursion?

**Recursion** is a programming technique where a function calls itself to solve a smaller version of the same problem.

- A function solves a problem by breaking it down into smaller subproblems.
- Each recursive call works on a simpler input.
- Eventually reaches a simple case that can be solved directly.

**Two Essential Parts**:
1. **Base Case** – Stops the recursion (without it leads to infinite recursion)
2. **Recursive Case** – Function calls itself with a smaller input

### Visual Example: Factorial
```
5! = 5 × 4!
4! = 4 × 3!
3! = 3 × 2!
2! = 2 × 1!
1! = 1      ← Base case
```

---

## 2. Base Case

The **base case** is the condition that stops recursion.

Without a proper base case leads to **infinite recursion** leads to **Stack Overflow**.

```cpp
void bad() {
    bad();  // No base case → Stack Overflow!
}
```

---

## 3. Stack Overflow

Each function call uses stack memory. Too many recursive calls exhaust the stack.

```cpp
// This will cause stack overflow for large n
int fact(int n) {
    if (n == 1) return 1;
    return n * fact(n - 1);
}
// fact(100000) → crash!
```

---

## 4. Recursion Examples

### 4.1 Print Numbers from 1 to N
```cpp
#include <iostream>
using namespace std;

void print1toN(int n) {
    if (n == 0) return;        // Base case
    print1toN(n - 1);          // Recursive call
    cout << n << " ";          // Print on way back
}

int main() {
    print1toN(5);  // Output: 1 2 3 4 5
    return 0;
}
```

### 4.2 Print Numbers from N to 1
```cpp
void printNto1(int n) {
    if (n == 0) return;
    cout << n << " ";
    printNto1(n - 1);
}

int main() {
    printNto1(5);  // Output: 5 4 3 2 1
    return 0;
}
```

### 4.3 Factorial
```cpp
long long factorial(int n) {
    if (n == 0 || n == 1) return 1;    // Base case
    return n * factorial(n - 1);
}

int main() {
    cout << factorial(5) << endl;  // 120
    return 0;
}
```

### 4.4 Sum of Digits
```cpp
int sumOfDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    cout << sumOfDigits(1234) << endl;  // 10
    return 0;
}
```

### 4.5 Power (a^b)
```cpp
double power(double a, int b) {
    if (b == 0) return 1;
    if (b < 0) return 1.0 / power(a, -b);
    return a * power(a, b - 1);
}

int main() {
    cout << power(2, 10) << endl;  // 1024
    return 0;
}
```

### 4.6 Fibonacci
```cpp
int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    cout << fib(8) << endl;  // 21
    return 0;
}
```

### 4.7 Find Minimum in Array
```cpp
int findMin(int arr[], int size) {
    if (size == 1) return arr[0];
    int minRest = findMin(arr + 1, size - 1);
    return (arr[0] < minRest) ? arr[0] : minRest;
}

int main() {
    int arr[] = {5, 2, 8, 1, 9};
    cout << findMin(arr, 5) << endl;  // 1
    return 0;
}
```

### 4.8 Find Maximum in Array
```cpp
int findMax(int arr[], int n) {
    if (n == 1) return arr[0];
    int maxRest = findMax(arr, n - 1);
    return (arr[n-1] > maxRest) ? arr[n-1] : maxRest;
}

int main() {
    int arr[] = {3, 7, 2, 9, 1};
    cout << findMax(arr, 5) << endl;  // 9
    return 0;
}
```

### 4.9 Print Binary of a Number
```cpp
void printBinary(int n) {
    if (n == 0) return;
    printBinary(n / 2);
    cout << (n % 2);
}

int main() {
    printBinary(13);  // Output: 1101
    cout << endl;
    return 0;
}
```

---

## 5. Recursion vs Iteration

| Feature             | Recursion                          | Iteration                     |
|---------------------|------------------------------------|-------------------------------|
| Code                | Cleaner, elegant                   | Sometimes longer              |
| Memory              | Uses stack (more memory)           | Usually less memory           |
| Speed               | Slower (function call overhead)    | Faster                        |
| Stack Overflow Risk | Yes                                | No                            |
| Best for            | Tree, divide & conquer, backtracking | Simple loops                  |

---

## 6. Summary Table

| Problem               | Base Case           | Recursive Step                   |
|-----------------------|---------------------|----------------------------------|
| Factorial             | n == 0 or 1         | n * fact(n-1)                    |
| Fibonacci             | n <= 1              | fib(n-1) + fib(n-2)              |
| Print 1 to N          | n == 0              | print(n-1) then print n          |
| Sum of digits         | n == 0              | (n%10) + sum(n/10)               |
| Power                 | b == 0              | a * power(a, b-1)                |
| Binary                | n == 0              | printBinary(n/2), then print bit |

---

## 7. Best Practices
- Always define a **base case**
- Ensure recursive calls move toward the base case
- Avoid recursion for very large inputs (risk of stack overflow)
- Use iteration when performance is critical
- Recursion is excellent for problems with natural recursive structure (trees, graphs, backtracking)
