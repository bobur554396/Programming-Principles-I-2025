#include <iostream>
// #include <cmath>

using namespace std;

int myPow(int base, int exp){
    int res = 1;
    for(int i = 0; i < exp; i++){
        res *= base; // 1 * 2 * 2 * 2 = 8
    }
    return res;
}

int main() {

    // pow(2, 3) => 2 ^ 3 => 1 * 2 * 2 * 2 = 8
    cout << myPow(2, 4) << endl;

    return 0;
}