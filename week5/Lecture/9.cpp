#include <iostream>

using namespace std;

int main() {
    /*
        - [ ] Show even/odd numbers from given array

        in:
        4
        2 5 7 8

        out:
        2 8
    */
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0){ // even
            cout << a[i] << " ";
        }
    }
    cout << endl;


    return 0;
}