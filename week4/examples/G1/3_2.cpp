#include <iostream>
#include <bitset>

using namespace std;

int main() {
    // - [ ] set 1 for i-th bit of number

    /*
    in:
    5 1

    out:
    7
    */

    int a, i;
    cin >> a >> i;

    // int mask = 1 << i;
    // int res = a | mask;
    
    a |= (1 << i); // a = a | (1 << i);


    cout << a << endl;
    

    
    return 0;
}