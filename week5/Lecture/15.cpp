#include <iostream>

using namespace std;

int main() {
    /*
        - [ ] Find Max (Min) element from given array

        in:
        4
        2 7 9 3

        out:
        9
    */
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max = a[0]; // assume first element is max
    for(int i = 1; i < n; i++) {
        if(a[i] > max){
            max = a[i];
        }
    }

    cout << max << endl;




    return 0;
}