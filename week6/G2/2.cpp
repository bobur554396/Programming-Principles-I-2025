#include <iostream>

using namespace std;

int main() {
    // - [ ] 1D array sort, reverse
    int n = 6;
    int arr[] = {5, 2, 9, 1, 5, 6};

    // cout << *(arr + 0) << endl;
    // cout << *(arr + 5) << endl;

    // sort(starting_address, ending_address) [starting_address, ending_address)
    // sort(arr + 1, arr + 4);
    
    // reverse(starting_address, ending_address) [starting_address, ending_address)

    sort(arr, arr + n);
    reverse(arr, arr + n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}