#include <iostream>

using namespace std;

/*
2^3 = 1 * 2 * 2 * 2 = 8
2^-3 = 1 / 2^3 = 1 / 8 = 0.125


1) 2 *= 2 => 4
2) 4 *= 4 => 16
*/

// Recursion
float myPow(int base, int exp){
    if(exp < 0){
        // 1/base^exp
        return 1 / myPow(base, -exp); // myPow(2, -(-3)) => myPow(2, 3)
    }
    float res = 1;
    for(int i = 0; i < exp; i++){
        res *= base;
    }
    return res;
}

int main() {
    /*
    in:
    2 3

    out:
    8

    2^3 = 8
    */

    cout<< myPow(2, -3) << endl;
    
    return 0;
}