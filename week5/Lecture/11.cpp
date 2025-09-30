#include <iostream>

using namespace std;

int main() {
    int n = 3;
    int arr[] = {2, 4, 6};

    // for(int i = 0; i < n; i++) {
    //     arr[i] = arr[i] * 2;
    // }
    for (int &x : arr) x *= 2;    

    
    // for(int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }
    for (int x : arr) cout << x << " ";
    

    return 0;
}