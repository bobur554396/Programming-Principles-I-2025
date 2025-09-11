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

    int a1 = n % 10; // 3
    n = n / 10; // n = 12
    int a2 = n % 10; // 2
    n = n / 10; // n = 1
    int a3 = n % 10; // 1
    n = n / 10; // n = 0

    cout << a1 + a2 + a3 << endl;
    

    return 0;
}