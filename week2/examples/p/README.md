# Practice lesson examples

## 1.cpp
Infinite loop using for statement - prints "hi " continuously
```cpp
#include <iostream>

using namespace std;

int main() {
    
    // - [ ] infinity loop
    for( ; ; ){
        cout << "hi ";  
    }
    

    return 0;
}
```

---

## 2.cpp
Infinite loop using while statement - prints "hi " continuously
```cpp
#include <iostream>

using namespace std;

int main() {
    
    // - [ ] infinity loop
    while(true){
        cout << "hi ";
    }
    

    return 0;
}
```

---

## 3.cpp
Sum calculator - reads numbers until 0 is entered, then outputs the sum
```cpp
#include <iostream>

using namespace std;

int main() {
    
    /*
    1
    2
    3
    7
    0
    
    1 + 2 + 3 + 7 = 12
    */

    int a, sum = 0;
    while(true){
        cin >> a;
        if(a == 0) 
            break;        
        
        sum += a; // sum = sum + a
    }

    cout << sum << endl;
    

    return 0;
}
```

---

## 4.cpp
Loop with continue and break - prints odd numbers from 1 to 10, stopping at 7
```cpp
#include <iostream>

using namespace std;

int main() {
    
    for(int i = 1; i <= 10; i++){
        if(i % 2 == 0)
            continue;
        
        if (i == 7)
            break;

        cout << i << " ";
    }
    

    return 0;
}
```

---

## 5_1.cpp
Count divisors of a number
```cpp
#include <iostream>

using namespace std;

int main() {
    /*
    - [ ] Show count of divisors of n
    7 -> 1, 7 => 2
    10 -> 1, 2, 5, 10 => 4
    13 -> 1, 13 => 2
    12 -> 1, 2, 3, 4, 6, 12 => 6
    */
    int n;
    cin >> n;

    int count = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count++;   
        }
    }
    cout << count << endl;
    
    

    return 0;
}
```

---

## 5_2.cpp
Prime number checker using divisor count method
```cpp
#include <iostream>

using namespace std;

int main() {
    /*
    - [ ] prime number
    7 -> YES
    10 -> NO
    13 -> YES
    12 -> NO
    */
    int n;
    cin >> n;
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count++;   
        }
    }
    if(count == 2){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    

    return 0;
}
```

---

## 5_3.cpp
Prime number checker using boolean flag approach
```cpp
#include <iostream>

using namespace std;

int main() {
    /*
    - [ ] prime number
    */
    int n;
    cin >> n;

    // [2...n-1]
    // 10 - 2, 5
    // 13 - 
    // 12 - 2, 3, 4, 6
    // 7 - 
    bool isPrime = true;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            isPrime = false;
        }
    }
    
    if(isPrime){ //if(isPrime == true)
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
```

---

## 5_4.cpp
Prime number checker with early exit optimization
```cpp
#include <iostream>

using namespace std;

int main() {
    /*
    - [ ] prime number
    */
    int n;
    cin >> n;

    // [2...n-1]
    // 10 - 2, 5
    // 13 - 
    // 12 - 2, 3, 4, 6
    // 7 - 
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    
    return 0;
}
```

---

## 5.cpp
Display all divisors of a given number
```cpp
#include <iostream>

using namespace std;

int main() {
    /*
    - [ ] show list of divisors of n
    7 -> 1, 7
    10 -> 1, 2, 5, 10
    13 -> 1, 13
    12 -> 1, 2, 3, 4, 6, 12
    */
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }
    

    return 0;
}
```

---

## 6.cpp
Generate Fibonacci sequence up to n terms
```cpp
#include <iostream>

using namespace std;

int main() {
    /*
    - [ ] Fibonacci sequence (0, 1, 1, 2, 3, 5, …)


    0 1
    a b
        1 
      a b  2 
              3 
                5
    */

    int n;
    cin >> n;

    int a = 0, b = 1;
    for(int i = 0; i < n; i++){
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }

    
    

    return 0;
}
```

---

## 7.cpp
Calculate factorial of a number
```cpp
#include <iostream>

using namespace std;

int main() {
    /*
    - [ ] factorial

    4! = 1 * 2 * 3 * 4 = 24
    */

    int n;
    cin >> n;
    int res = 1;
    for(int i = 1; i <= n; i++){
        res *= i; // res = res * i;
    }

    cout << res << endl;

    
    

    return 0;
}
```

---

## 8.cpp
Count words in a string (incomplete implementation)
```cpp
#include <iostream>

using namespace std;

int main() {
    /*
    - [ ] string: number of words

    input:
    Hello, world! This is KBTU.

    output:
    5
    */


    

    return 0;
}
```

---

## 9.cpp
Extract digits from a string using ASCII code comparison
```cpp
#include <iostream>

using namespace std;

int main() {
    /*
    - [ ] Show digits from given string

    input:
    He3l1l4o

    output:
    314
    */
    string s;
    cin >> s;

    // cout << s[0] << endl;
    // cout << s[s.length() - 1] << endl;
    // cout << s.length() << endl;
    for(int i = 0; i < s.length(); i++){
        int code = (int)s[i];
        if(code >= 48 && code <= 57){
            cout << s[i];
        }
    }

    

    return 0;
}
```

---

## 9_1.cpp
Extract digits from a string using character comparison
```cpp
#include <iostream>

using namespace std;

int main() {
    /*
    - [ ] Show digits from given string

    input:
    He3l1l4o

    output:
    314
    */
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            cout << s[i];
        }
    }

    

    return 0;
}
```

---

## 10.cpp
Extract individual digits from a number (demonstration version)
```cpp
#include <iostream>

using namespace std;

int main() {
    /*
    - [ ] Find the sum of digits of a given number

    input:
    123

    output:
    1 + 2 + 3 = 6

    */

    int n;
    cin >> n; // 123

    cout << n % 10 << " "; // 3
    n = n / 10; // n = 12
    cout << n % 10 << " "; // 2
    n = n / 10; // n = 1
    cout << n % 10 << " "; // 1
    

    return 0;
}
```

---

## 10_1.cpp
Calculate sum of digits in a number

**Hint:** Use while loop with `n > 0`, add `n % 10` to sum, then update n with `n /= 10`
```cpp
#include <iostream>

using namespace std;

int main() {
    /*
    - [ ] Find the sum of digits of a given number

    input:
    123

    output:
    1 + 2 + 3 = 6

    */

    int n;
    cin >> n; // 123

    // cout << n % 10 << " "; // 3
    // n = n / 10; // n = 12
    // cout << n % 10 << " "; // 2
    // n = n / 10; // n = 1
    // cout << n % 10 << " "; // 1
    // n = n / 10; // n = 0
    
    int sum = 0;
    while(n > 0){
        // cout << n % 10 << " ";
        sum += n % 10;
        n /= 10; // n = n / 10;
    }

    cout << sum << endl;

    return 0;
}
```