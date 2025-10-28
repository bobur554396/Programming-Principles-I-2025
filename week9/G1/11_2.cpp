#include <iostream>
// #include <cmath>

using namespace std;

float myPow(int base, int exp){
    bool flag = true;
    if(exp < 0){
        flag = false;
        exp *= -1;
    }

    float res = 1;
    for(int i = 0; i < exp; i++){
        res *= base; // 1 * 2 * 2 * 2 = 8
    }
    if(!flag)
        return 1 / res;

    return res;
}

int main() {

    // pow(2, 3) => 2 ^ -3 => 1 / 2^3 = 1 / 2 * 2 * 2 = 1 / 8 = 0.125
    cout << myPow(2, 2) << endl;
    // cout << pow(2, -3) << endl;

    return 0;
}