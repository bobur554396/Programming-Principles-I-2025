#include <iostream>

using namespace std;

int main() {
    /*
    - [ ] Count number of digits (2025 -> 4)

    input:
    2025

    output:
    4

    */

    int n;
    cin >> n;

    int cnt = 0;
    while(n > 0){
        cnt++;
        n /= 10;
    }

    cout << cnt << endl;

    return 0;
}