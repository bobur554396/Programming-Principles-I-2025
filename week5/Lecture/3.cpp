#include <iostream>

using namespace std;

int main() {
    /*
    int arr[100];
    */
    int n = 100;
    int arr[n]; // n = 100
    // first element is at index 0
    // last element is at index 9 => n - 1

    for(int i = 0; i < n; i++) {
        arr[i] = i * 2;
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}