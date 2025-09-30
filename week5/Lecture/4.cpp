#include <iostream>

using namespace std;

int main() {
    /*

    */

    // int arr[]; // error - size of array must be known at compile time
    int arr[10]; // 1. declaration of array of size 10, after assigning values
    // int arr2[10] = {2, 4, 6}; // 2. declaration and initialization of array of size 10, first 3 values are assigned, rest are 0
    // int arr2[2] = {2, 4, 6}; // error - size of array is less than number of values provided
    int a[] = {1, 2, 3}; // 3. size of array is determined by number of values provided

    
    for(int i = 0; i < 10; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}