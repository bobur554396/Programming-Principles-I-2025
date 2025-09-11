#include <iostream>

using namespace std;

int main() {
    /*
    - [ ] Find the maximum digit in a number

    input:
    1973

    output:
    9

    */

    int n;
    cin >> n;

    int maxDigit = 0;
    while(n > 0){ // 1973 -> 197 -> 19 -> 1 -> 0
        int currentDigit = n % 10;
        if(currentDigit > maxDigit){
            maxDigit = currentDigit;
        }
        n /= 10;
    }

    cout << maxDigit << endl;

    return 0;
}