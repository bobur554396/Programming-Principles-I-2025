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