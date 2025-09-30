#include <iostream>

using namespace std;

int main() {
    /*
        - [ ] Sum of all elements int array

        in:
        3
        2 4 6

        out:
        12
    */
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
    }

    cout << sum << endl;



    return 0;
}