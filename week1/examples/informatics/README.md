# Lecture Examples


## 1. a.cpp
Reads two double-precision floating-point numbers and calculates the hypotenuse of a right triangle using the Pythagorean theorem.

```cpp
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double a, b;

    cin >> a >> b;

    double res = sqrt(a * a + b * b);

    cout << res << endl;

    return 0;
}
```

---

## 2. b.cpp
Reads an integer input and outputs the next and previous numbers for the given input.

```cpp
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n;

    cout << "The next number for the number " << n << " is " << n + 1 << "." << endl;
    cout << "The previous number for the number " << n << " is " << n - 1 << "." << endl;
    

    return 0;
}
```
