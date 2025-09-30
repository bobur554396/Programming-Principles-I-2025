#include <iostream>

using namespace std;

int main() {
    /*
    int arr[5];

    values =>   [2][7][5][8][9]  
    index  =>    0  1  2  3  4
    */

    int arr[5]; // declaration of array of size 5
    arr[0] = 2; // assigning value to index 0
    arr[1] = 7; // assigning value to index 1
    arr[2] = 5; // assigning value to index 2
    arr[3] = 8; // assigning value to index 3
    arr[4] = 9; // assigning value to index 4

    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << endl;



    return 0;
}