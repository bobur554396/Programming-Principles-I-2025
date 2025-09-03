# Lecture 2: Variables, Data Types, and Loops

## 1. Variables and Data Types

### What are Variables?
Variables are containers that store data values. Think of them as labeled boxes where you can put different types of information.

### Basic Data Types
- **int**: Whole numbers (e.g., 5, -10, 0)
- **double/float**: Decimal numbers (e.g., 3.14, -2.5)
- **bool**: true or false values
- **char**: Single characters (e.g., 'A', '5', '@')
- **string**: Text/sequences of characters (e.g., "Hello World")

### Variable Declaration Examples
```cpp
#include <iostream>
#include <string>
using namespace std;

int age = 25;
double price = 19.99;
bool isStudent = true;
char grade = 'A';
string name = "Bob";
```

---

## 2. Logical Operators

### Basic Logical Operators
- **AND (&&)**: Returns true only if both conditions are true
- **OR (||)**: Returns true if at least one condition is true  
- **XOR (^)**: Returns true if exactly one condition is true (exclusive or)
- **NOT (!)**: Reverses the boolean value

### Truth Tables
![Truth table](img/bitwise-truth-table.jpeg)

### Examples
```cpp
bool a = true, b = false;
cout << (a && b) << endl;  // 0 (false)
cout << (a || b) << endl;  // 1 (true)
cout << (a ^ b) << endl;   // 1 (true)
cout << (!a) << endl;      // 0 (false)
```

---

## 3. Logical Comparisons

### Comparison Operators
- **==**: Equal to
- **!=**: Not equal to
- **>**: Greater than
- **<**: Less than
- **>=**: Greater than or equal to
- **<=**: Less than or equal to

### Examples
```cpp
int x = 10, y = 20;
bool result1 = (x == y);    // false
bool result2 = (x < y);     // true
bool result3 = (x >= 10);   // true
```

---

## 4. Conditional Statements

### Basic If Statement
```cpp
if (condition) {
    // code to execute if condition is true
}
```

### If-Else Statement
```cpp
if (condition) {
    // code if true
} else {
    // code if false
}
```

### Nested If Statements
```cpp
if (condition1) {
    if (condition2) {
        // code if both conditions are true
    }
} else {
    // code if condition1 is false
}
```

### Practical Example
```cpp
int score = 85;
if (score >= 90) {
    cout << "Grade: A" << endl;
} else if (score >= 80) {
    cout << "Grade: B" << endl;
} else if (score >= 70) {
    cout << "Grade: C" << endl;
} else {
    cout << "Grade: F" << endl;
}
```

---

## 5. Math Functions

### Common Math Functions
- **pow(base, exponent)**: Calculates power
- **round(number)**: Rounds to nearest integer
- **ceil(number)**: Rounds up to next integer
- **floor(number)**: Rounds down to previous integer

### Examples
```cpp
#include <cmath>

double result1 = pow(2, 3);        // 8.0 (2^3)
double result2 = round(4.7);       // 5.0
double result3 = ceil(4.2);        // 5.0
double result4 = floor(4.8);       // 4.0
```

---

## 6. Character and String Data Types

### Char Data Type
- Stores a single character
- Uses single quotes: 'A', '5', '@'
- Actually stores ASCII/Unicode values

```cpp
char letter = 'A';
char digit = '5';
char symbol = '@';

// ASCII values
cout << (int)letter << endl;  // 65 (ASCII value of 'A')
```

### String Data Type
- Stores sequences of characters
- Uses double quotes: "Hello World"
- **Important:** While many modern g++ versions include <string> automatically when you include <iostream>, it's best practice to explicitly include <string> for portability

```cpp
#include <string>
string greeting = "Hello World";
string name = "Alice";
string message = greeting + ", " + name;  // "Hello World, Alice"
```

### String Operations
```cpp
string text = "Programming";
cout << text.length() << endl;    // 11 (length of string)
cout << text[0] << endl;          // 'P' (first character)
cout << text.substr(0, 4) << endl; // "Prog" (substring)
```

---

## 7. Loop Operators

### For Loop
Best when you know the number of iterations in advance.

```cpp
for (initialization; condition; update) {
    // code to repeat
}

// Example:
for (int i = 0; i < 5; i++) {
    cout << "Count: " << i << endl;
}
```

### Different For Loop Variations
```cpp
// Counting backwards
for (int i = 5; i > 0; i--) {
    cout << i << endl;
}

// Increment by 2
for (int i = 0; i < 10; i += 2) {
    cout << i << endl;  // 0, 2, 4, 6, 8
}
```

### While Loop
Best when the number of iterations depends on a condition.

```cpp
while (condition) {
    // code to repeat
}

// Example:
int count = 0;
while (count < 5) {
    cout << "Count: " << count << endl;
    count++;
}
```

### Do-While Loop
Executes the code block at least once, then checks the condition.

```cpp
do {
    // code to repeat
} while (condition);

// Example:
int count = 0;
do {
    cout << "Count: " << count << endl;
    count++;
} while (count < 5);
```

---

## 8. Loop Control: Continue and Break

### Break Statement
Exits the loop immediately when encountered.

```cpp
for (int i = 0; i < 10; i++) {
    if (i == 5) {
        break;  // Exit loop when i equals 5
    }
    cout << i << endl;  // Prints: 0, 1, 2, 3, 4
}
```

### Continue Statement
Skips the rest of the current iteration and moves to the next iteration.

```cpp
for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) {
        continue;  // Skip even numbers
    }
    cout << i << endl;  // Prints: 1, 3, 5, 7, 9
}
```

### Practical Examples
```cpp
// Finding first even number greater than 10
int num = 11;
while (true) {
    if (num % 2 == 0) {
        cout << "First even number: " << num << endl;
        break;
    }
    num++;
}

// Sum only positive numbers
int sum = 0;
for (int i = -5; i <= 5; i++) {
    if (i <= 0) {
        continue;  // Skip non-positive numbers
    }
    sum += i;
}
cout << "Sum of positive numbers: " << sum << endl;  // 15
```
