# C++ Basic Programming Examples

## hello.cpp
Basic "Hello, World!" program - prints greeting message

**Hint:** Use `cout` to output text, `endl` for new line
```cpp
#include <iostream>

using namespace std;

int main(){

    cout << "Hello, World!" << endl;
    
    return 0;
}
```

---

## 1.cpp
Variable declaration and assignment with comments demonstration

**Hint:** Use `//` for single line comments, `/* */` for multi-line comments. Variables can be reassigned new values
```cpp
#include <iostream>

using namespace std;

int main(){
    // line comment asdasd
    
    /*
    multi 
    line 
    comment
    */
    int number; // Declare an integer variable
    number = 2; // Assign the value 2 to the variable
    number = 5; // Reassign the value 5 to the variable

    cout << number << endl;
    
    return 0;
}
```

---

## 2.cpp
Basic arithmetic operation - addition of two numbers

**Hint:** Declare variables with initial values, use `+` operator for addition, store result in new variable
```cpp
#include <iostream>

using namespace std;

int main(){
    
    int number1 = 2;
    int number2 = 5;

    int result = number1 + number2;

    cout << result << endl;
    
    return 0;
}
```

---

## 3.cpp
Variable naming rules and data types demonstration

**Hint:** Variable names must start with letter or underscore, can contain letters, digits, underscore. Cannot use reserved keywords
```cpp
#include <iostream>

using namespace std;

int main(){
    /*
    Letters: a–z, A–Z
    Digits: 0–9 (but not as the first character)
    Underscore: _
    */
    // int 1num; error
    // int 1; error
    // int num1; ok
    // int num_2; ok
    // int myNumber; ok
    // int int; error
    // int return; error

    int count = 1;
    float total_sum1 = 2.4f;
    double total_sum2 = 2.4;
    char firstLetter = 'A';
    bool _isReady = true;
    int MAX_VALUE1 = 100;

    int age = 20;
    double pi = 3.14159;
    float rate = 0.95f;
    char grade = 'A';
    bool isOnline = true;

    
    return 0;
}
```

---

## 4.cpp
Basic input and output operations

**Hint:** Use `cin` for input from console, `cout` for output to console
```cpp
#include <iostream>

using namespace std;

int main(){
    
    int a;

    cin >> a; // console input

    cout << a << endl; // console output

    
    return 0;
}
```

---

## 5.cpp
Reading two numbers and calculating their sum

**Hint:** Read two integers separately using `cin`, add them together and output the result
```cpp
#include <iostream>

using namespace std;

int main(){
    
    int a, b;

    cin >> a;
    cin >> b;

    // cout << a << " " << b << endl; // console output

    int res = a + b;

    cout << res << endl;
    
    return 0;
}
```

---

## 6.cpp
Modulo operation demonstration

**Hint:** Use `%` operator to get remainder of division. When a < b, result is always a
```cpp
#include <iostream>

using namespace std;

int main(){

    int a = 10;
    int b = 11;

    cout << a % b << endl;
    
    return 0;
}
```

---

## 7.cpp
Reading two numbers in one line and adding them

**Hint:** Use `cin >> a >> b` to read multiple values in one statement, separated by spaces
```cpp
#include <iostream>

using namespace std;

int main(){
    
    int a, b;

    cin >> a >> b;

    int res = a + b;

    cout << res << endl;
    
    return 0;
}
```