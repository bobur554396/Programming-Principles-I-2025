#include <iostream>

using namespace std;

int main() {

    /*
    1 byte = 8 bits
    [][][][][][][][][][] = 1 byte

    [0][0][0][0][0][0][0][0][0][0] = 0 * 2^0 + 0 * 2^1 ... = 0
    [0][0][0][0][0][0][0][0][0][1] = 1 * 2^0 + 0 * 2^1 ... = 1
    [0][0][0][0][0][0][0][0][1][0] = 0 * 2^0 + 1 * 2^1 ... = 2
    [0][0][0][0][0][0][0][0][1][1] = 1 * 2^0 + 1 * 2^1 ... = 3

    int = 4 bytes = 32 bits
    most left bit will be used for sign
    1 bit for sign, 31 bits for number value

    int range: [-2^31, 2^31 - 1] = [-2147483648, 2147483647]
    */

    int a = 3;


    return 0;
}