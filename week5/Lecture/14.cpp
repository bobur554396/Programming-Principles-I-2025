#include <iostream>

using namespace std;

int main() {
    /*
        - [ ] Show numbers in even position from given array

        in:
        4
        2 5 7 8

        out:
        2 7
    */
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0){
            cout << a[i] << " ";
        }
    }
    cout << endl;


    return 0;
}