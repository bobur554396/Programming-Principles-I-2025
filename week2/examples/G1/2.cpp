#include <iostream>

using namespace std;

int main() {
    // - [x] data type sizeof

    /*
    from binary system to decimal system
    [0][0][0][0][0][0][0][0] = 0
    [0][0][0][0][0][0][0][1] = 1 * 2^0 + 0 * 2^1 + ... = 1
    [0][0][0][0][0][0][1][0] = 0 * 2^0 + 1 * 2^1 + ... = 2
    [0][0][0][0][0][0][1][1] = 1 * 2^0 + 1 * 2^1 + ... = 3

    -5 - left significant bit (MSB) will be used for sign
    [sign][][]... - 32 bit
    int range: [-2^31, 2^31 - 1] = [-2147483648, 2147483647]

    1 byte = 8 bits/cells
    4 bytes = 4 * 8 = 32 bits


    bool - 1 byte = 8 bits
    [0][0][0][0][0][0][0][0] = false
    [0][0][0][0][0][0][0][1] = true
    

    */
    
    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(float) = " <<sizeof(float) << endl;
    cout << "sizeof(double) = " <<sizeof(double) << endl;
    cout << "sizeof(char) = " <<sizeof(char) << endl;
    cout << "sizeof(bool) = " <<sizeof(bool) << endl;
    cout << "sizeof(string) = " <<sizeof(string) << endl;


    return 0;
}