# Lecture Examples G1

## 1.cpp
Comparison operators demonstration with real-world examples

**Hint:** Use comparison operators `>=`, `==`, `!=` to compare values. Results are boolean (1 for true, 0 for false)
```cpp
#include <iostream>

using namespace std;

int main() {
    int age = 20;
    double balance = 300;
    string password = "kbtu123";

    // Check if a student is old enough to register
    cout << (age >= 18) << endl;   // true (1)

    // Check if user has enough money (tenge) for a bus ticket
    cout << (balance >= 150.0) << endl;   // true (1)

    // Check if entered password is correct
    cout << (password == "kbtu123") << endl;  // true (1)

    // Check if two exam scores are not equal
    int score1 = 85, score2 = 90;
    cout << (score1 != score2) << endl;  // true (1)

    return 0;
}
```

---

## 2.cpp
Data type sizes in memory (sizeof operator)

**Hint:** Use `sizeof()` to check how many bytes each data type uses in memory. Binary system explanation included
```cpp
#include <iostream>

using namespace std;

int main() {
    // - [x] data type sizeof

    /*
    from binary system to decimal system
    [0][0][0][0][0][0][0][0] = 0
    [0][0][0][0][0][0][0][1] = 1 * 2^0 + 0 * 2^1 + ... = 1
    [0][0][0][0][0][0][1][0] = 0 * 2^0 + 1 * 2^1 + ... = 2
    [0][0][0][0][0][0][1][1] = 1 * 2^0 + 1 * 2^1 + ... = 3

    -5 - left significant bit (MSB) will be used for sign
    [sign][][]... - 32 bit
    int range: [-2^31, 2^31 - 1] = [-2147483648, 2147483647]

    1 byte = 8 bits/cells
    4 bytes = 4 * 8 = 32 bits


    bool - 1 byte = 8 bits
    [0][0][0][0][0][0][0][0] = false
    [0][0][0][0][0][0][0][1] = true
    

    */
    
    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(float) = " <<sizeof(float) << endl;
    cout << "sizeof(double) = " <<sizeof(double) << endl;
    cout << "sizeof(char) = " <<sizeof(char) << endl;
    cout << "sizeof(bool) = " <<sizeof(bool) << endl;
    cout << "sizeof(string) = " <<sizeof(string) << endl;


    return 0;
}
```

---

## 3.cpp
Compound assignment operators

**Hint:** Use shorthand operators like `+=`, `*=`, `++`, `--` to modify variables more efficiently
```cpp
#include <iostream>

using namespace std;

int main() {
    // - [x] (++, --, +=, -=, *=, /=, %= )

    int a = 2;
    int b = 3;
    // a += 1; // a = a + 1;
    // a *= 3; // a = a * 3;

    // a++; // a = a + 1; a += 1;
    a--; // a = a - 1; a -= 1;


    cout << a << endl;


    return 0;
}
```

---

## 4.cpp
Pre-increment vs Post-increment operators

**Hint:** `++a` (pre-increment) increments first then returns value, `a++` (post-increment) returns value then increments
```cpp
#include <iostream>

using namespace std;

int main() {
    // - [x] (++, --,)

    /*
    
    Pre increment; ++a;
    Post increment; a++;

    Pre decrement; --a;
    Post decrement; a--;
    */

    int a = 2;
    // ++a; // a = a + 1; a += 1;
    // a++; // a = a + 1; a += 1;

    // int b = a++;
    // int b = ++a;

    int c = a++ + ++a - --a + a-- + a;

    cout << a << " " << b << " " << c << endl;


    return 0;
}
```

---

## 5.cpp
Mathematical functions from cmath library

**Hint:** Include `<cmath>` for functions like `pow()`, `round()`, `ceil()`, `floor()`, `sin()`. Use `M_PI` for pi constant
```cpp
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // - [x] math functions - pow, round, ceil, floor

    // cout << pow(2, 3) << endl; // 2^3 = 8
    // cout << round(4.6) << endl; // 5
    // cout << ceil(4.00001) << endl; // 5
    // cout << floor(4.99999) << endl; // 4

    float pi = 3.1415;
    cout << M_PI << endl;

    cout << sin(90 * pi / 180) << endl; // 1


    return 0;
}
```

---

## 6.cpp
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

    // Check if student is eligible to register (between 18 and 30)
    cout << (age >= 18 && age < 30) << endl;   // true (1) [18, 30)

    // Check if user can travel (enough money OR has a student discount)
    bool hasStudentCard = true;
    cout << (balance >= 100.0 || hasStudentCard) << endl;   // true (1)

    // Check if entered password is NOT empty
    cout << (!(password == "")) << endl;   // true (1)

    return 0;
}
```

---

## 7.cpp
Basic if-else conditional statements

**Hint:** Use `if (condition)` for single condition, `if-else` for two alternatives
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    /*
    1.
    if (condition) {
        // code to execute if condition is true
    }   

    2.
    if (condition) {
        // code if true
    } else {
        // code if false
    }    
    */

    int a;
    cin >> a;
    if (a > 0) {
        cout << "Positive" << endl;
    } else {
        cout << "Non-positive" << endl;
    }

    return 0;
}
```

---

## 8.cpp
Multiple conditions using if-else if chain (simple grading)

**Hint:** Use `if-else if` chain for multiple conditions. Order matters - check from highest to lowest
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    int score;
    cin >> score;

    
    if (score >= 90) {
        cout << "Grade: A" << endl;
    } else if (score >= 80) {
        cout << "Grade: B" << endl;
    } else if (score >= 70) {
        cout << "Grade: C" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}
```

---

## 8_1.cpp
Enhanced grading system with input validation

**Hint:** Add range checking with `&&` operator to validate input bounds and handle invalid scores
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
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}
```

---

## 9.cpp
String concatenation and input

**Hint:** Use `+` operator to concatenate strings, `cin` to read string input
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    char c = 'H';
    string greeting = "Hello World";
    string name;
    cin >> name;
    string message = greeting + ", " + name;

    cout << message << endl;

    return 0;
}
```

---

## 10.cpp
String methods (length and substring)

**Hint:** Use `.length()` to get string size, `.substr(start, length)` to extract substring
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    string text = "Programming";
    cout << text.length() << endl;    // 11 (length of string)
    cout << text.substr(0, 4) << endl; // "Prog" (substring)

    return 0;
}
```

---

## 11.cpp
Basic for loop structure

**Hint:** For loop syntax: `for(initialization; condition; update)`. Executes while condition is true
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    /*
    for (initialization; condition; update) {
        // code to repeat
    }
    */
    for (int i = 0; i < 5; i++) {
        cout << "Count: " << i << endl;
    }    
    

    return 0;
}
```

---

## 12.cpp
For loop counting backwards

**Hint:** Use decrement operator `i--` and reverse condition `i >= 0` to count down
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    /*
    for (initialization; condition; update) {
        // code to repeat
    }
    */
    // Counting backwards
    for (int i = 5; i >= 0; i--) {
        cout << i << endl;
    }

     
    

    return 0;
}
```

---

## 13.cpp
For loop with custom increment

**Hint:** Use `i += 3` to increment by 3 each iteration instead of 1
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    /*
    for (initialization; condition; update) {
        // code to repeat
    }
    */
    // Increment by 2
    for (int i = 0; i < 1000; i += 3) {
        cout << i << " ";
    }

    cout << endl;

     
    

    return 0;
}
```

---

## 14.cpp
While loop with changing condition

**Hint:** While loop continues as long as condition is true. Make sure to modify the condition variable inside loop
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
    int balance = 100;
    while (balance > 0) {
        cout << "Remaining balance: " << balance << endl;
        balance -= 30; // spend money
    }

     
    

    return 0;
}
```

---

## 15.cpp
Converting for loop to while loop

**Hint:** While loop equivalent of for loop: initialize before loop, check condition, update inside loop
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
    // for (int i = 0; i < 5; i++) {
    //     cout << "Count: " << i << endl;
    // }
    int i = 0;
    while (i < 5) {
        cout << "Count: " << i << endl;
        i++;
    }


     
    

    return 0;
}
```