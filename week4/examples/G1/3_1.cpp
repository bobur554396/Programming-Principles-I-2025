#include <iostream>
#include <bitset>

using namespace std;

int main() {
    // - [ ] set 1 for i-th bit of number

    // int a = 5; // 0101
               //  |
               // 0010
               // 0111
    int a;
    cin >> a;

    /*
    i = 0
    0101
    |
    0001
    -----
    0101 = 5

    i = 1
    0101
    |
    0010
    -----
    0111 = 7

    i = 2
    0101
    |
    0100
    -----
    0101 = 5

    i = 3
    0101
    |
    1000
    -----
    1101 = 13
    */

    /*
    i = 0 => 5
    i = 1 => 7
    i = 2 => 5
    */

    int i;
    cin >> i;
    int mask = 1 << i;

    // bitset<4> x1(mask);
    // cout << x1 << endl;

    int res = a | mask;
    bitset<4> x2(res);

    cout << x2 << endl << res << endl;

    
    
    

    
    return 0;
}