#include <iostream>
// #include <cmath>

using namespace std;

/*
2^3 = 1 * 2 * 2 * 2 = 8


1) 2 *= 2 => 4
2) 4 *= 4 => 16
*/

float myPow(int base, int exp){
    float res = 1;
    for(int i = 0; i < exp; i++){
        // base *= base;
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
    */

    cout<< myPow(2, 3) << endl;
    
    return 0;
}