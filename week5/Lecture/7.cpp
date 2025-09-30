#include <iostream>

using namespace std;

int main() {
    /*
        Your are give an array of integers of size N.
        Print the array without any changes.

        in:
        4
        2 4 6 8

        out:
        2 4 6 8
    */

    // Reading part
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Logic part

    // Output part
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;


    return 0;
}