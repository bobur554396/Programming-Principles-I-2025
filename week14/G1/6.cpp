#include <iostream>

using namespace std;

// - [ ] factorial

int factorial(int n){ // n!
    if(n == 0) // base case
        return 1;

    return n * factorial(n - 1); // n * (n - 1)!
}



int main(){
    int n;
    cin >> n; // 3!

    cout << factorial(n) << endl;


    return 0;
}