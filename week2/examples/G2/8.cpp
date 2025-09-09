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