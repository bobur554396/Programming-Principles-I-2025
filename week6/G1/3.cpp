#include <iostream>

using namespace std;

int main() {
    int a[] = {5, 2, 4, 6, 1, 3};


    // cout << *(a + 0) << endl; // a[0]
    // cout << *(a + 1) << endl; // a[1]
    // cout << *(a + 5) << endl; // a[5]

    // sort(start_address, end_address + 1) ; [start_address; end_address)
    // reverse(start_address, end_address + 1) ; [start_address; end_address)

    sort(a, a + 6);
    reverse(a, a + 6);

    // max value
    cout << a[0] << endl;
    
    // min value
    cout << a[5] << endl;

    return 0;
}