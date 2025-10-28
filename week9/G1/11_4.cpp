#include <iostream>

using namespace std;

float myPow(int base, int exp){
    if(exp < 0){
        return 1 / myPow(base, -exp); // 1 / 2 ^ -(-3) => 1 / 2^3
    }
    float res = 1;
    for(int i = 0; i < exp; i++){
        res *= base; // 1 * 2 * 2 * 2 = 8
    }
    return res;
}

int main() {

    // pow(2, 3) => 2 ^ -3 => 1 / 2^3 = 1 / 2 * 2 * 2 = 1 / 8 = 0.125
    cout << myPow(2, -3) << endl;
    // cout << pow(2, -3) << endl;

    return 0;
}