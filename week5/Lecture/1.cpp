#include <iostream>

using namespace std;

int main() {
    // - [ ] What is an array/list?
    int a = 2;
    int b = 3;
    int c = 4;
    
    /*
    Array is - list of values with same type. (bag/box of values)
    */

    /*
    Creation:

    data_type var_name[size];

    int arr[3];
    address:    0x..  0x..  0x..
    values =>   [2]   [7]   [5]
    index  =>    0     1     2
    */
    int arr[3]; // declaration of array of size 3
    arr[0] = 2; // assigning value to index 0
    arr[1] = 7; // assigning value to index 1
    // arr[1] = "hello"; // error - cannot assign string to int array
    arr[2] = 5; // assigning value to index 2

    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl; 



    return 0;
}