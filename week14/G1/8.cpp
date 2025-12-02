#include <iostream>

using namespace std;

// 2 ^ 3 = 8
// 2 ^ -3 = 1 / 2 ^ 3 = 1 / 8 = 0.125


// 2^3 => 2 * 2^2
// 2^2 => 2 * 2^1
// 2^1 => 2 * 2^0
// 2^0 => 1; // base case
double power(double a, int b) { // a = 2, b = -3;
    if (b == 0) return 1; // base case
    if (b < 0) return 1.0 / power(a, -b); // 1.0 / power(2, -(-3)) = 1.0 / power(2, 3) = 1.0 / 8 = 0.125
    return a * power(a, b - 1);
}

int main(){
    int a, b;
    cin >> a >> b;

    cout << power(a, b) << endl;

    return 0;
}