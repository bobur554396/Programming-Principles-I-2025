#include <iostream>
#include <cmath>

using namespace std;

/*
2^3 = 1 * 2 * 2 * 2 = 8
2^-3 = 1 / 2^3 = 1 / 8 = 0.125


1) 2 *= 2 => 4
2) 4 *= 4 => 16
*/

float myPow(int base, int exp){
    float res = 1;
    for(int i = 0; i < abs(exp); i++){
        res *= base;
    }

    if(exp < 0)
        return 1 / res;
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