# Lecture 6: Strings in C++

## 1. What is a String?
A string is a sequence of characters used to represent text. In C++, the `std::string` class (from `<string>` library) provides a dynamic, convenient way to work with text data.

- **Key Characteristics**:
  - Dynamic size (grows/shrinks automatically).
  - Provides many built-in functions for manipulation.
  - Indexed starting from 0, like arrays.
  - Part of the C++ Standard Library.

## 2. String Operations Overview
- **Initialization**: Create strings using constructors or direct assignment.
- **Access**: Use indices or iterators to access characters.
- **Modification**: Use functions like `append`, `insert`, `erase`, and operators like `+=`.
- **Search**: Use `find`, `substr` to locate and extract substrings.
- **Conversion**: Convert between strings and other data types using `stoi`, `stringstream`, etc.

## 3. String Examples

### 3.1 What is a String
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello, World!";
    cout << "String: " << s << endl;
    return 0;
}
```

### 3.2 Initialize String (With Constructor)
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1;                          // Empty string
    string s2 = "Hello";                // Direct initialization
    string s3("World");                 // Constructor
    string s4(5, 'A');                  // 5 copies of 'A': "AAAAA"
    string s5(s2);                      // Copy constructor
    
    cout << "s1: '" << s1 << "'" << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3: " << s3 << endl;
    cout << "s4: " << s4 << endl;
    cout << "s5: " << s5 << endl;
    return 0;
}
```

### 3.3 Size & Length
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello";
    cout << "String: " << s << endl;
    cout << "Size: " << s.size() << endl;       // Returns length
    cout << "Length: " << s.length() << endl;   // Same as size()
    cout << "Empty: " << (s.empty() ? "Yes" : "No") << endl;
    return 0;
}
```

### 3.4 Copy String From One to Another
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Original";
    string s2;
    
    s2 = s1;  // Copy assignment
    
    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    
    s1 = "Modified";
    cout << "After modifying s1:" << endl;
    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;  // s2 remains unchanged
    return 0;
}
```

### 3.5 Comparing Two Strings for Equality
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello";
    string s2 = "Hello";
    string s3 = "World";
    
    if (s1 == s2) {
        cout << "s1 and s2 are equal" << endl;
    }
    
    if (s1 != s3) {
        cout << "s1 and s3 are not equal" << endl;
    }
    
    // Lexicographical comparison
    if (s1 < s3) {
        cout << "s1 comes before s3 lexicographically" << endl;
    }
    
    return 0;
}
```

### 3.6 Concatenate Strings/Chars (+, +=)
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello";
    string s2 = " World";
    
    string s3 = s1 + s2;  // Concatenation with +
    cout << "s3: " << s3 << endl;
    
    s1 += s2;             // Concatenation with +=
    cout << "s1: " << s1 << endl;
    
    s1 += '!';            // Append a character
    cout << "s1: " << s1 << endl;
    
    return 0;
}
```

### 3.7 Accessing Each Element by Loop
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello";
    
    // Using index
    cout << "Using index: ";
    for (int i = 0; i < s.length(); i++) {
        cout << s[i] << " ";
    }
    cout << endl;
    
    // Using range-based for loop
    cout << "Using range-based loop: ";
    for (char c : s) {
        cout << c << " ";
    }
    cout << endl;
    
    // Modify characters
    s[0] = 'h';
    cout << "Modified: " << s << endl;
    
    return 0;
}
```

### 3.8 Convert Char to Number (ASCII)
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    char c = 'A';
    int ascii = (int)c;
    
    cout << "Character: " << c << endl;
    cout << "ASCII code: " << ascii << endl;
    
    // Convert back
    char c2 = (char)(ascii + 1);
    cout << "Next character: " << c2 << endl;
    
    // Digit to number
    char digit = '5';
    int num = digit - '0';  // Convert '5' to 5
    cout << "Digit '" << digit << "' as number: " << num << endl;
    
    return 0;
}
```

### 3.9 s.front(), s.back()
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello";
    
    cout << "String: " << s << endl;
    cout << "First character (front): " << s.front() << endl;
    cout << "Last character (back): " << s.back() << endl;
    
    s.front() = 'h';  // Modify first character
    s.back() = '!';   // Modify last character
    
    cout << "Modified: " << s << endl;
    
    return 0;
}
```

### 3.10 s.begin(), s.end()
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello";
    
    // Using iterators
    cout << "Using iterators: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    // Modify using iterators
    for (auto it = s.begin(); it != s.end(); it++) {
        *it = toupper(*it);
    }
    cout << "Uppercase: " << s << endl;
    
    return 0;
}
```

### 3.11 Find Function (int and string::npos)
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello World";
    
    // Find a character
    int pos = s.find('o'); // size_t pos;
    if (pos != string::npos) {
        cout << "'o' found at position: " << pos << endl;
    } else {
        cout << "'o' not found" << endl;
    }
    
    // Find a substring
    pos = s.find("World");
    if (pos != string::npos) {
        cout << "'World' found at position: " << pos << endl;
    }
    
    // Find returns string::npos if not found
    pos = s.find('z');
    cout << "Finding 'z': " << (pos == string::npos ? "Not found" : "Found") << endl;
    
    return 0;
}
```

### 3.12 Check if Second String is Found in First
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;
    
    if (s1.find(s2) != string::npos) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
```

### 3.13 Count How Many Times a Substring Occurs
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "abababa";
    string pattern = "aba";
    
    int count = 0;
    int pos = 0;
    
    while ((pos = s.find(pattern, pos)) != string::npos) {
        count++;
        pos++;  // Move to next position
    }
    
    cout << "'" << pattern << "' occurs " << count << " times in '" << s << "'" << endl;
    
    return 0;
}
```

### 3.14 getline(cin, s) - Read All Line
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    
    cout << "Enter a line of text: ";
    getline(cin, s);  // Reads entire line including spaces
    
    cout << "You entered: " << s << endl;
    cout << "Length: " << s.length() << endl;
    
    return 0;
}
```

### 3.15 substr(index, cnt)
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello World";
    
    string sub1 = s.substr(0, 5);   // "Hello"
    string sub2 = s.substr(6, 5);   // "World"
    string sub3 = s.substr(6);      // "World" (from index 6 to end)
    
    cout << "Original: " << s << endl;
    cout << "substr(0, 5): " << sub1 << endl;
    cout << "substr(6, 5): " << sub2 << endl;
    cout << "substr(6): " << sub3 << endl;
    
    return 0;
}
```

### 3.16 erase(start_index, count)
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello World";
    
    cout << "Original: " << s << endl;
    
    s.erase(5, 6);  // Erase " World"
    cout << "After erase(5, 6): " << s << endl;
    
    s = "Hello World";
    s.erase(5);     // Erase from index 5 to end
    cout << "After erase(5): " << s << endl;
    
    return 0;
}
```

### 3.17 append, insert Functions
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello";
    
    // append
    s.append(" World");
    cout << "After append: " << s << endl;
    
    // insert
    s.insert(5, ",");  // Insert at position 5
    cout << "After insert: " << s << endl;
    
    s.insert(0, "Say: ");
    cout << "After insert at beginning: " << s << endl;
    
    return 0;
}
```

### 3.18 Print All Doubled Chars in Sequence
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    cout << "Doubled characters: ";
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            cout << s[i] << " ";
        }
    }
    cout << endl;
    
    return 0;
}
```

### 3.19 Palindrome Check (Loop with Iterators)
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    auto left = s.begin();
    auto right = s.end() - 1;
    
    bool isPalindrome = true;
    while (left < right) {
        if (*left != *right) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
    
    cout << (isPalindrome ? "YES" : "NO") << endl;
    
    return 0;
}
```

### 3.20 Palindrome Check (With Bool Flag)
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    bool isPalindrome = true;
    int n = s.length();
    
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }
    
    cout << (isPalindrome ? "YES" : "NO") << endl;
    
    return 0;
}
```

### 3.21 Palindrome Check (With Contradiction/Return)
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    int n = s.length();
    
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) {
            cout << "NO" << endl;
            return 0;  // Exit immediately
        }
    }
    
    cout << "YES" << endl;
    
    return 0;
}
```

### 3.22 Palindrome Check (Left and Right Pointers)
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    int left = 0;
    int right = s.length() - 1;
    
    while (left < right) {
        if (s[left] != s[right]) {
            cout << "NO" << endl;
            return 0;
        }
        left++;
        right--;
    }
    
    cout << "YES" << endl;
    
    return 0;
}
```

### 3.23 Palindrome Check (Reverse String)
```cpp
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    
    if (s == reversed) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
```

### 3.24 StringStream - Concatenating Multiple Data Types
```cpp
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string name = "Alice";
    int age = 25;
    double height = 5.6;
    
    stringstream ss;
    ss << "Name: " << name << ", Age: " << age << ", Height: " << height;
    
    string result = ss.str();
    cout << result << endl;
    
    return 0;
}
```

### 3.25 StringStream - Extracting Mixed Data Types
```cpp
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string data = "Alice 25 5.6";
    
    stringstream ss(data);
    
    string name;
    int age;
    double height;
    
    ss >> name >> age >> height;
    
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    
    return 0;
}
```

### 3.26 StringStream - Counting Words in a String
```cpp
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);
    
    stringstream ss(s);
    string word;
    int count = 0;
    
    while (ss >> word) {
        count++;
    }
    
    cout << "Number of words: " << count << endl;
    
    return 0;
}
```

### 3.27 StringStream - Parse String as Float and Int
```cpp
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string s = "123 45.67 89";
    
    stringstream ss(s);
    
    int num1;
    float num2;
    int num3;
    
    ss >> num1 >> num2 >> num3;
    
    cout << "Integer: " << num1 << endl;
    cout << "Float: " << num2 << endl;
    cout << "Integer: " << num3 << endl;
    
    return 0;
}
```

### 3.28 stoi - String to Integer
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "123";
    string s2 = "45.67";
    string s3 = "100abc";
    
    int num1 = stoi(s1);
    cout << "stoi(\"123\"): " << num1 << endl;
    
    int num2 = stoi(s2);  // Converts up to decimal point
    cout << "stoi(\"45.67\"): " << num2 << endl;
    
    int num3 = stoi(s3);  // Converts up to non-digit
    cout << "stoi(\"100abc\"): " << num3 << endl;
    
    // Also: stof (string to float), stod (string to double)
    float f = stof(s2);
    cout << "stof(\"45.67\"): " << f << endl;
    
    return 0;
}
```

## 4. Summary of Key String Functions

| Function | Description | Example |
|----------|-------------|---------|
| `s.size()` / `s.length()` | Returns string length | `s.size()` |
| `s.empty()` | Checks if string is empty | `s.empty()` |
| `s[i]` | Access character at index i | `s[0]` |
| `s.front()` | First character | `s.front()` |
| `s.back()` | Last character | `s.back()` |
| `s.begin()` / `s.end()` | Iterator to start/end | `for(auto it = s.begin()...)` |
| `s.find(str)` | Find substring, returns position or `string::npos` | `s.find("hello")` |
| `s.substr(pos, len)` | Extract substring | `s.substr(0, 5)` |
| `s.erase(pos, len)` | Remove characters | `s.erase(5, 3)` |
| `s.insert(pos, str)` | Insert string at position | `s.insert(5, "hi")` |
| `s.append(str)` | Append string | `s.append(" world")` |
| `getline(cin, s)` | Read entire line | `getline(cin, s)` |
| `stoi(s)` | Convert string to integer | `stoi("123")` |
| `to_string(n)` | Convert number to string | `to_string(123)` |

## 5. Best Practices
- Use `getline()` when reading strings with spaces
- Always check `string::npos` when using `find()`
- Use range-based for loops for simpler iteration
- Prefer `+=` over `+` for better performance when concatenating
- Use `stringstream` for complex parsing and formatting tasks
