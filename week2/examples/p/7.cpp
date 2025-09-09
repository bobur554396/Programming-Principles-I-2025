#include <iostream>

using namespace std;

int main() {
    /*
    - [ ] factorial

    4! = 1 * 2 * 3 * 4 = 24
    */

    int n;
    cin >> n;
    int res = 1;
    for(int i = 1; i <= n; i++){
        res *= i; // res = res * i;
    }

    cout << res << endl;

    
    

    return 0;
}