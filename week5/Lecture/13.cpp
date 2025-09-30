#include <iostream>

using namespace std;

int main() {
    /*
        - [ ] Show numbers in odd position from given array

        in:
        4
        2 5 7 8

        out:
        5 8
    */
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        if(i % 2 == 1){
            cout << a[i] << " ";
        }
    }
    cout << endl;


    return 0;
}