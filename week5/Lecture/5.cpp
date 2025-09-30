#include <iostream>

using namespace std;

int main() {
    /*
    int arr[3];

    address  =>   0x6... 0x6... 0x6...
    values   =>   [2]    [7]    [5]
    index    =>    0      1      2
    */
    int arr[3]; // declaration of array of size 3
    arr[0] = 2; // assigning value to index 0
    arr[1] = 7; // assigning value to index 1
    arr[2] = 5; // assigning value to index 2

    cout << *(arr + 0) << endl; // a[0]
    cout << *(arr + 1) << endl; // a[1]
    cout << *(arr + 2) << endl; // a[2]

    // cout << arr[0] << " " << arr[1] << " " << arr[2] << endl; 


    return 0;
}