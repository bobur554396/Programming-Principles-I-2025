#include <iostream>
#include <bitset>

using namespace std;

int main(){
    int a = 6; // 0110
    int b = 3; // 0011

    /*
    0110
    ^
    0011
    ----
    0101 = 1 + 4 = 5
    */
    
    int c = a ^ b;
    bitset<4> x1(a);
    bitset<4> x2(b);
    bitset<4> x3(c);

    cout << x1 << endl << "|\n" << x2 << endl << "=\n" << x3 << endl;
    cout << c << endl;

    // cout << c << endl;

    


    return 0;
}