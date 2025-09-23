#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int a = 6; // 0110 = 0*2^0 + 1*2^1 + 1*2^2 + 0*2^3 = 6
    int b = 3; // 0011 = 1*2^0 + 1*2^1 + 0*2^2 + 0*2^3 = 3
                     
    bitset<4> x1(a);
    bitset<4> x2(b);

    // int c = a & b; // AND
    
    // int c = a | b; // OR
    // // 0111 = 1*2^0 + 1*2^1 + 1*2^2 + 0*2^3 = 7   
    
    int c = a ^ b; // XOR
    // 0101 = 1*2^0 + 0*2^1 + 1*2^2 + 0*2^3 = 5 

    bitset<32> x3(c);

    cout << x1 << endl << x2 << endl << x3 << endl;

    cout << c << endl;

    int d = ~(c); // NOT
    bitset<32> x4(d);

    cout << x4 << endl << d << endl;


    
    return 0;
}