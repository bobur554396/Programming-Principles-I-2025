#include <iostream>
#include <bitset>

using namespace std;

int main() {
    // Clear the i-th bit (set to 0)

    int a, i;
    cin >> a >> i;    

    a &= ~(1 << i); // a = a & ~(1 << i);

    cout << a << endl;

    
    return 0;
}