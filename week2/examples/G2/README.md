# Lecture Examples

## 1.cpp
Data type sizes in bytes demonstration

**Hint:** Use `sizeof()` operator to determine memory usage of different data types
```cpp
#include <iostream>

using namespace std;

int main() {

    // - [ ] data type sizeof

    cout << "sizeof(int): " << sizeof(int) << " bytes" << endl;
    cout << "sizeof(long long): " << sizeof(long long) << " bytes" << endl;
    cout << "sizeof(float): " << sizeof(float) << " bytes" << endl;
    cout << "sizeof(double): " << sizeof(double) << " bytes" << endl;
    cout << "sizeof(bool): " << sizeof(bool) << " byte" << endl;
    cout << "sizeof(char): " << sizeof(char) << " byte" << endl;
    cout << "sizeof(string): " << sizeof(string) << " byte" << endl;

    return 0;
}
```

---

## 2.cpp
Binary system and integer range explanation

**Hint:** Understanding how binary works: each bit represents power of 2, leftmost bit is sign for signed integers
```cpp
#include <iostream>

using namespace std;

int main() {

    /*
    1 byte = 8 bits
    [][][][][][][][][][] = 1 byte

    [0][0][0][0][0][0][0][0][0][0] = 0 * 2^0 + 0 * 2^1 ... = 0
    [0][0][0][0][0][0][0][0][0][1] = 1 * 2^0 + 0 * 2^1 ... = 1
    [0][0][0][0][0][0][0][0][1][0] = 0 * 2^0 + 1 * 2^1 ... = 2
    [0][0][0][0][0][0][0][0][1][1] = 1 * 2^0 + 1 * 2^1 ... = 3

    int = 4 bytes = 32 bits
    most left bit will be used for sign
    1 bit for sign, 31 bits for number value

    int range: [-2^31, 2^31 - 1] = [-2147483648, 2147483647]
    */

    int a = 3;


    return 0;
}
```

---

## 4.cpp
Compound assignment operators demonstration

**Hint:** Use shorthand operators `+=`, `-=`, `%=` etc. to modify variables efficiently
```cpp
#include <iostream>

using namespace std;

int main() {

    /*
    - [ ] (++, --, +=, -=, *=, /=, %= )
    */
    int a = 3;
    a += 4; // a = a + 4;
    a -= 2; // a = a - 2;
    a %= 3; // a = a % 3;

    cout << a << endl;


    return 0;
}
```

---

## 5.cpp
Increment and decrement operators

**Hint:** Use `++` to add 1, `--` to subtract 1. These are shortcuts for `+= 1` and `-= 1`
```cpp
#include <iostream>

using namespace std;

int main() {

    /*
    - [ ] (++, --, +=, -=, *=, /=, %= )
    */
    int a = 3;
    a += 4; // a = a + 4;
    a++; // a += 1; // a = a + 1;
    a--; // a -= 1; // a = a - 1;

    cout << a << endl;


    return 0;
}
```

---

## 6.cpp
Pre-increment vs Post-increment complex expression

**Hint:** `++a` increments first then returns, `a++` returns then increments. Evaluate expressions step by step
```cpp
#include <iostream>

using namespace std;

int main() {

    /*
        Pre increment: ++a; --a;
        Post increment: a++; a--;
    */
    int a = 3;
    // a++;
    // ++a;
    // int b = a++;
    int b = ++a;

    int c = a++ + ++a - --a + a-- + a; // find value

    cout << a << " " << b << endl;


    return 0;
}
```

---

## 7.cpp
Comparison operators with real-world examples

**Hint:** Use `>=`, `==`, `!=` to compare values. Results are boolean (1 for true, 0 for false)
```cpp
#include <iostream>

using namespace std;

int main() {
    int age = 20;
    double balance = 300;
    string password = "1122";

    // Check if a student is old enough to register
    cout << (age >= 18) << endl;   // true (1)

    // Check if user has enough money (tenge) for a bus ticket
    cout << (balance >= 150.0) << endl;   // true (1)

    // Check if entered password is correct
    cout << (password == "1122") << endl;  // true (1)

    // Check if two exam scores are not equal
    int score1 = 85, score2 = 90;
    cout << (score1 != score2) << endl;  // true (1)

    return 0;
}
```

---

## 8.cpp
Mathematical functions from cmath library

**Hint:** Include `<cmath>` for functions like `pow()`, `round()`, `ceil()`, `floor()`, `sin()`. Use `M_PI` for pi
```cpp
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // - [x] math functions - pow, round, ceil, floor
    double num = 5.9999999;

    cout << "Power: " << pow(num, 2) << endl;      // 5.7^2
    cout << "Round: " << round(num) << endl;       // 6
    cout << "Ceil: " << ceil(num) << endl;         // 6
    cout << "Floor: " << floor(num) << endl;      // 5

    float pi = 3.14159;
    cout << M_PI << endl;
    cout << "Sin(90): " << sin(90 * pi / 180) << endl;   // 1

    return 0;
}
```

---

## 9.cpp
Logical operators (AND, OR, NOT)

**Hint:** Use `&&` (AND), `||` (OR), `!` (NOT) to combine boolean conditions
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    int age = 20;
    double balance = 50.0;
    string password = "kbtu123";

    // Check if student is eligible to register [18, 30]
    cout << (age >= 18 && age <= 30) << endl;   // true (1)

    // Check if user can travel (enough money OR has a student discount)
    bool hasStudentCard = true;
    cout << (balance >= 100.0 || hasStudentCard) << endl;   // true (1)

    // Check if entered password is NOT empty
    cout << (!(password == "")) << endl;   // true (1)

    return 0;
}
```

---

## 10.cpp
Simple if statement (single condition)

**Hint:** Use `if (condition)` to execute code only when condition is true
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    // 4. Conditional Statements

    /*
    if (condition) {
        // code to execute if condition is true
    }
    */
    int a;
    cin >> a;
    
    if(a > 0) {
        cout << "Positive" << endl;
    }


    return 0;
}
```

---

## 11.cpp
If-else statement (two alternatives)

**Hint:** Use `if-else` to handle both true and false cases of a condition
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    // 4. Conditional Statements

    /*
    if (condition) {
        // code to execute if condition is true
    } else {
        // code to execute if condition is false
    }
    */
    int a;
    cin >> a;
    
    if(a > 0) {
        cout << "Positive" << endl;
    } else {
        cout << "Non-positive" << endl;
    }


    return 0;
}
```

---

## 12.cpp
Even or odd number checker

**Hint:** Use modulo operator `%` with 2. If `n % 2 == 0`, number is even
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    // - [ ] even odd example

    
    int a;
    cin >> a;
    
    if(a % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
    


    return 0;
}
```

---

## 13.cpp
Grade calculator with input validation

**Hint:** Use `if-else if` chain with range validation using `&&` and `||` operators
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    int score;
    
    cin >> score;

    if (score >= 90 && score <= 100) {
        cout << "Grade: A" << endl;
    } else if (score >= 80 && score < 90) {
        cout << "Grade: B" << endl;
    } else if (score >= 70 && score < 80) {
        cout << "Grade: C" << endl;
    } else if (score < 0 || score > 100) {
        cout << "Invalid score" << endl;
    } else  {
        cout << "Grade: F" << endl;
    }


    return 0;
}
```

---

## 14.cpp
String operations and concatenation

**Hint:** Use `+` to concatenate strings, `.length()` to get string size
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    char c = 'A'; // single character
    string greeting = "Hello World";
    string name = "Alice1&^%$#@!";
    string message = greeting + ", " + name;

    cout << name.length() << endl;
    cout << message << endl;

    return 0;
}
```

---

## 15.cpp
Repetitive code without loops

**Hint:** Demonstrates why loops are needed - repetitive code is inefficient and hard to maintain
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    
    cout << "hi" << endl;
    cout << "hi" << endl;
    cout << "hi" << endl;


    return 0;
}
```

---

## 16.cpp
Basic for loop structure

**Hint:** For loop syntax: `for(initialization; condition; update)`. Loop continues while condition is true
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    
    /*
    for (initialization of iterator; condition; update of iterator) {
        // code to repeat
    }    
    */

    for(int i = 0; i <= 10; i++) {
        cout << "count: " << i << endl;
    }


    return 0;
}
```

---

## 17.cpp
For loop with multiplication update

**Hint:** Use `i *= 2` to double the iterator each time instead of incrementing by 1
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    
    /*
    for (initialization of iterator; condition; update of iterator) {
        // code to repeat
    }    
    */

    for(int i = 1; i <= 10; i *= 2) {
        cout << "count: " << i << endl;
    }


    return 0;
}
```

---

## 18.cpp
Print even numbers using conditional check

**Hint:** Use `if (i % 2 == 0)` inside loop to check and print only even numbers
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    // all even number from 1 to 100 
    
    for(int i = 1; i <= 100; i++) {
        if(i % 2 == 0) {
            cout << i << " ";
        }   
    }


    return 0;
}
```

---

## 18_1.cpp
Print even numbers using step increment

**Hint:** Start from 0 and use `i += 2` to increment by 2, automatically getting even numbers
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    // all even number from 1 to 100 
    
    for(int i = 0; i <= 100; i += 2) {
        cout << i << " ";
    }


    return 0;
}
```

---

## 19.cpp
For loop counting backwards to negative numbers

**Hint:** Use `i--` and condition `i > -10` to count down into negative range
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {    
    // Counting backwards
    for (int i = 5; i > -10; i--) {
        cout << i << endl;
    }



    return 0;
}
```

---

## 20.cpp
Converting for loop to while loop

**Hint:** Initialize before loop, check condition in while, update inside loop body. Equivalent to for loop
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {    
    /*
    while (condition) {
        // code to repeat
    }    
    */
    // for(int i = 0; i <= 10; ++i) {
    //     cout << "count: " << i << endl;
    // }
    int i = 0;
    while(i <= 10) {
        cout << "count: " << i << endl;
        i++;
    }



    return 0;
}
```