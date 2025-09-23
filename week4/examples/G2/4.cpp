#include <iostream>
#include <bitset>

using namespace std;

int main(){
    int a = 6; // 0110

    /*
    0110
    ~ (NOT)
    =>
    1001
    */
    int c = ~(a); // 1001 => 1's compliment of the number a
    bitset<32> x1(a);
    bitset<32> x3(c);

    /*
    11111111111111111111111111111001 => -7
    1. ~(11111111111111111111111111111001)
         00000000000000000000000000000110 = -(6 + 1)

    ~(0)
    11111111 => -0+1
    -0
    +0

    x = ~(x - 1) => -x
    */

    cout << x1 << endl << "~ => \n" << x3 << endl;
    cout << c << endl;

    


    return 0;
}