#include <iostream>
// #include <cmath>

using namespace std;

/*
2^3 = 1 * 2 * 2 * 2 = 8
2^-3 = 1 / 2^3 = 1 / 8 = 0.125


1) 2 *= 2 => 4
2) 4 *= 4 => 16
*/

float myPow(int base, int exp){
    bool flag = true;
    if(exp < 0){
        flag = false;
        exp *= -1;
    }
    float res = 1;
    for(int i = 0; i < exp; i++){
        // base *= base;
        res *= base;
    }

    if(!flag)
        return 1 / res; // 1 / 8
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