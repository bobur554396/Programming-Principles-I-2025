#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int a = 6; // 0110 = 0*2^0 + 1*2^1 + 1*2^2 + 0*2^3 = 6
    int b = 3; // 0011 = 1*2^0 + 1*2^1 + 0*2^2 + 0*2^3 = 3
                     
    bitset<4> x1(a);
    bitset<4> x2(b);

    /*
    6 = 0110

    0110 << 1 => 1100 = 12
    0110 >> 1 => 0011 = 3


    0110 = 6
    1) 1100 = 12 
    2) 00011000 = 24
    */
    int c = a << 2; // Left Shift
    // int c = a >> 1; // Left Shift

    bitset<32> x3(c);
    cout << x1 << endl << x3 << endl;
    cout << c << endl;

    
    return 0;
}