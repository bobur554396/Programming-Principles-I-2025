#include <iostream>
#include <bitset>

using namespace std;

int main() {
    // Clear the i-th bit (set to 0)

    /*
    a = 5 (0101)
    
    i = 0
    0101
    &
    1110 => ~(0001)
    -----
    0100

    i = 1
    0101
    &
    1101 => ~(0010)
    -----
    0101

    i = 2
    0101
    &
    1011 => ~(0100)
    -----
    0001
    */

    int a, i;
    cin >> a >> i;    
    int mask = ~(1 << i);

    // bitset<32> x1(mask);
    // cout << x1 << endl;


    int res = a & mask;
    bitset<4> x2(res);

    cout << x2 << endl << res << endl;

    
    
    

    
    return 0;
}