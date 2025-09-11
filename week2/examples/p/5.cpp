#include <iostream>

using namespace std;

int main() {
    /*
    - [ ] show list of divisors of n. Range: [1..n]
    7 -> 1 7
    10 -> 1 2 5 10
    13 -> 1 13
    12 -> 1 2 3 4 6 12
    */
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }
    

    return 0;
}