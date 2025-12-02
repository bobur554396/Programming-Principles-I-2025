#include <iostream>

using namespace std;

double power(double a, int b) { 
    if (b == 0) return 1; // base case
    if (b < 0) return 1.0 / power(a, -b); // 2^-3 = 1.0 / power(2, -(-3)) => 1.0 / power(2, 3) => 1 / 8 = 0.125  
    return a * power(a, b - 1);
}

/*
power(2, 3) => 2 * power(2, 2) ==> 2 * 4 = 8
power(2, 2) => 2 * power(2, 1) ==> 2 * 2 = 4
power(2, 1) => 2 * power(2, 0) ==> 2 * 1 = 2
power(2, 0) => base case => return 1

*/


int main(){
    double a, b;
    cin >> a >> b;

    cout << power(a, b) << endl;

    return 0;
}